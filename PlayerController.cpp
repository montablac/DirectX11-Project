#include <limits>
#include <fstream>
#include "PlayerController.h"

BOOL CALLBACK DIEnumDevicesCallback(LPCDIDEVICEINSTANCE lpddi, LPVOID pvRef)
{
	if (lpddi->dwDevType != DI8DEVTYPE_KEYBOARD || lpddi->dwDevType != DI8DEVTYPE_MOUSE)
	{
		DIDEVICEINSTANCE* temp = new DIDEVICEINSTANCE;

		temp->dwSize = lpddi->dwSize;
		temp->dwDevType = lpddi->dwDevType;
		temp->guidFFDriver = lpddi->guidFFDriver;
		temp->guidInstance = lpddi->guidInstance;
		temp->guidProduct = lpddi->guidProduct;
		temp->wUsage = lpddi->wUsage;
		temp->wUsagePage = lpddi->wUsagePage;

		

		strcpy_s(temp->tszInstanceName, lpddi->tszInstanceName);
		strcpy_s(temp->tszProductName, lpddi->tszProductName);

		if (!PlayerController::GetController()->AddDIController(temp))
		{
			delete temp;
		}
	}

	return DIENUM_CONTINUE;
}

bool PlayerController::AddDIController(DIDEVICEINSTANCE* p_NewController)
{
	bool bReturn = false;

	HRESULT errors;

	DIDEVCAPS Caps;

	Caps.dwSize = sizeof(DIDEVCAPS);

	IDirectInputDevice8* p_Temp = 0;

	errors = p_ControllerInterface->CreateDevice(p_NewController->guidInstance, &p_Temp, NULL);

	if (errors == S_OK)
	{
		errors = p_Temp->GetCapabilities(&Caps);

		if (errors == S_OK)
		{
			bReturn = (p_ControllerRequirment->sAxes <= Caps.dwAxes) && 
				(p_ControllerRequirment->sButtons <= Caps.dwButtons) &&
				(p_ControllerRequirment->sPoV <= Caps.dwPOVs);

			if (bReturn)
			{
				p_attachedControllers.push_back(p_NewController);
				iControllers++;
			}
		}

		p_Temp->Release();
	}

	return bReturn;
}

PlayerController* PlayerController::GetController()
{
	if (p_Controller == 0)
	{
		p_Controller = new PlayerController;
	}

	return p_Controller;
}

bool PlayerController::bStartup(HINSTANCE hinst)
{
	bool bReturn = false;

	HRESULT errors;

	errors = DirectInput8Create(hinst, DIRECTINPUT_VERSION, IID_IDirectInput8A, (void**)&p_ControllerInterface, NULL);

	p_ControllerRequirment = new ControllerRequirments;

	p_ControllerRequirment->sAxes = 2;
	p_ControllerRequirment->sButtons = 4;
	p_ControllerRequirment->sPoV = 1;

	ActiveInput = IC_DIRECTINPUT;

	if (!(FAILED(errors)))
	{
		errors = p_ControllerInterface->EnumDevices(DIEDFL_ALLDEVICES, DIEnumDevicesCallback, NULL, DIEDFL_ATTACHEDONLY);
	
		if (!(FAILED(errors)))
		{
			bReturn = PlayerController::GetController()->LoadControllScheme();

			if (bReturn && ActiveInput == IC_DIRECTINPUT)
			{
				bool bFoundController = false;

				for (int i = 0; i < iControllers && !bFoundController; i++)
				{
					for (int f = 0; f < iControllerMaps && !bFoundController; f++)
					{
						if (p_attachedControllers[i]->guidInstance == SavedControllerMaps[f]->ControllerID)
						{
							ControllerInUseID = p_attachedControllers[i]->guidInstance;
							bFoundController = true;
						}
					}
				}

				if (bFoundController)
				{
					errors = p_ControllerInterface->CreateDevice(ControllerInUseID, &p_ActiveControllerDI, NULL);

					if (!(FAILED(errors)))
					{
						DIDEVCAPS deviceCaps;

						deviceCaps.dwSize = sizeof(DIDEVCAPS);

						errors = p_ActiveControllerDI->GetCapabilities(&deviceCaps);

						if (!(FAILED(errors)))
						{
							Axes = deviceCaps.dwAxes;
							Buttons = deviceCaps.dwButtons;
							PoV = deviceCaps.dwPOVs;

							bButtonUse = new bool[Buttons];

							for (int i = 0; i < Buttons; i++)
							{
								bButtonUse[i] = false;
							}

							errors = p_ActiveControllerDI->SetDataFormat(&c_dfDIJoystick2);

							if (!(FAILED(errors)))
							{
								DIPROPDWORD DeadZone;

								DeadZone.diph.dwHeaderSize = sizeof(DIPROPHEADER);
								DeadZone.diph.dwSize = sizeof(DIPROPDWORD);

								DeadZone.diph.dwHow = DIPH_DEVICE;
								DeadZone.diph.dwObj = 0;

								DeadZone.dwData = 10000 * fDeadZone;

								errors = p_ActiveControllerDI->SetProperty(DIPROP_DEADZONE, &DeadZone.diph);

								DeadZone.dwData = 8000;

								if (!(FAILED(errors)))
								{
									errors = p_ActiveControllerDI->SetProperty(DIPROP_SATURATION, &DeadZone.diph);
								}

								DIPROPRANGE Range;

								Range.diph.dwHeaderSize = sizeof(DIPROPHEADER);
								Range.diph.dwSize = sizeof(DIPROPRANGE);

								Range.diph.dwHow = DIPH_DEVICE;
								Range.diph.dwObj = 0;

								Range.lMax = 10000;
								Range.lMin = -10000;

								if (!(FAILED(errors)))
								{
									errors = p_ActiveControllerDI->SetProperty(DIPROP_RANGE, &Range.diph);
								}

								if (!(FAILED(errors)))
								{
									errors = p_ActiveControllerDI->Acquire();
								}
							}
						}
					}
					if(FAILED(errors))
					{
						bFoundController = false;
					}
				}
				if (!bFoundController)
				{
					ActiveInput = IC_KEYBOARD;
				}
			}
		}
	}

	return bReturn;
}

PlayerController::PlayerController()
{
	
}

PlayerController::~PlayerController()
{
	Release();
}

void PlayerController::Release()
{
	if (p_ActiveControllerDI != 0)
	{
		p_ActiveControllerDI->Release();
		p_ActiveControllerDI = 0;
	}

	if (p_ControllerInterface != 0)
	{
		p_ControllerInterface->Release();
		p_ControllerInterface = 0;
	}

	if (p_Controller != 0)
	{
		delete p_Controller;
	}
}

void PlayerController::PassWindowsMessage(UINT iMessage, WPARAM wPram, LPARAM lPram)
{
	ControllerAction Action = 0;

	if ((iMessage == WM_KEYDOWN || iMessage == WM_KEYUP) && ActiveInput == IC_KEYBOARD)
	{
		auto FindKey = KeyBinds.find(wPram);
		if (FindKey != KeyBinds.end())
		{
			Action = FindKey->second;

			if (iMessage == WM_KEYDOWN)
			{
				sCurrentAction = sCurrentAction | Action;
			}
			else
			{
				sCurrentAction = sCurrentAction & (~Action);
			}
		}
	}
}

ControllerAction PlayerController::PollController()
{
	return sCurrentAction;
}

void PlayerController::Update()
{
	if (ActiveInput != IC_KEYBOARD)
	{
		if (ActiveInput == IC_DIRECTINPUT)
		{
			if (p_ActiveControllerDI != 0)
			{
				HRESULT errors;

				errors = p_ActiveControllerDI->Poll();

				if (!(FAILED(errors)))
				{
					errors = p_ActiveControllerDI->GetDeviceState(sizeof(DIJOYSTATE2), (void*)&RawData);

					if (!(FAILED(errors)))
					{
						int iActiveController = 0;

						bool bFoundController = false;

						if (AxisValues == 0)
						{
							AxisValues = new long[Axes];

							for (int i = 0; i < Axes; i++)
							{
								AxisValues[i] = 0;
							}
						}

						if (PovValues == 0)
						{
							PovValues = new long[PoV];
						}

						for (int i = 0; i < Axes; i++)
						{
							PovValues[i] = RawData.rgdwPOV[i];
						}

						int iData = Axes - 1;

						switch (Axes)
						{
						case 24:
							AxisValues[iData] = RawData.lFRz;
							iData--;
						case 23:
							AxisValues[iData] = RawData.lFRy;
							iData--;
						case 22:
							AxisValues[iData] = RawData.lFRx;
							iData--;
						case 21:
							AxisValues[iData] = RawData.lFZ;
							iData--;
						case 20:
							AxisValues[iData] = RawData.lFY;
							iData--;
						case 19:
							AxisValues[iData] = RawData.lFX;
							iData--;
						case 18:
							AxisValues[iData] = RawData.lARz;
							iData--;
						case 17:
							AxisValues[iData] = RawData.lARy;
							iData--;
						case 16:
							AxisValues[iData] = RawData.lARx;
							iData--;
						case 15:
							AxisValues[iData] = RawData.lAZ;
							iData--;
						case 14:
							AxisValues[iData] = RawData.lAY;
							iData--;
						case 13:
							AxisValues[iData] = RawData.lAX;
							iData--;
						case 12:
							AxisValues[iData] = RawData.lVRz;
							iData--;
						case 11:
							AxisValues[iData] = RawData.lVRy;
							iData--;
						case 10:
							AxisValues[iData] = RawData.lVRx;
							iData--;
						case 9:
							AxisValues[iData] = RawData.lVZ;
							iData--;
						case 8:
							AxisValues[iData] = RawData.lVY;
							iData--;
						case 7:
							AxisValues[iData] = RawData.lVX;
							iData--;
						case 6:
							AxisValues[iData] = RawData.lRz;
							iData--;
						case 5:
							AxisValues[iData] = RawData.lRy;
							iData--;
						case 4:
							AxisValues[iData] = RawData.lRx;
							iData--;
						case 3:
							AxisValues[iData] = RawData.lZ;
							iData--;
						case 2:
							AxisValues[iData] = RawData.lY;
							iData--;
						case 1:
							AxisValues[iData] = RawData.lX;
							iData--;
						default:
							break;
						}

						for (int i = 0; i < iControllerMaps && bFoundController; i++)
						{
							if (SavedControllerMaps[i]->ControllerID == ControllerInUseID)
							{
								iActiveController = i;

								bFoundController = true;
							}
						}

						for (int i = 0; i < SavedControllerMaps[iActiveController]->sButtons; i++)
						{
							if (SavedControllerMaps[iActiveController]->Buttons[i]->ButtonType == DIC_BUTTON)
							{
								if (SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber <= Buttons)
								{
									int iDataLocation = SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber;

									if ((bool)RawData.rgbButtons[iDataLocation])
									{
										sCurrentAction = sCurrentAction | SavedControllerMaps[iActiveController]->Buttons[i]->ActionOne;
										bButtonUse[iDataLocation] = true;
									}
									if (!((bool)RawData.rgbButtons[iDataLocation]) && bButtonUse[iDataLocation])
									{
										sCurrentAction = sCurrentAction & (~SavedControllerMaps[iActiveController]->Buttons[i]->ActionOne);
										bButtonUse[iDataLocation] = false;
									}
								}
							}

							if (SavedControllerMaps[iActiveController]->Buttons[i]->ButtonType == DIC_AXIS)
							{
								int iDataLocation = SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber;

								DIPROPRANGE AxisRange;

								AxisRange.diph.dwHeaderSize = sizeof(DIPROPHEADER);
								AxisRange.diph.dwSize = sizeof(DIPROPRANGE);

								AxisRange.diph.dwHow = DIPH_BYOFFSET;
								AxisRange.diph.dwObj = SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber * 4;

								errors = p_ActiveControllerDI->GetProperty(DIPROP_RANGE, &AxisRange.diph);

								if (!(FAILED(errors)))
								{
									if (SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber <= Axes)
									{
										int iTemp = SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber;

										long Center = 0;

										bool bBreak = ((AxisValues[iTemp] > 1000) || (AxisValues[iTemp] < -1000));

										if (AxisValues[iTemp] < Center)
										{
											sCurrentAction = sCurrentAction | SavedControllerMaps[iActiveController]->Buttons[i]->ActionOne;
										}
										else
										{
											sCurrentAction = sCurrentAction & (~SavedControllerMaps[iActiveController]->Buttons[i]->ActionOne);
										}

										if (AxisValues[iTemp] > Center)
										{
											sCurrentAction = sCurrentAction | SavedControllerMaps[iActiveController]->Buttons[i]->ActionTwo;
										}
										else
										{
											sCurrentAction = sCurrentAction & (~SavedControllerMaps[iActiveController]->Buttons[i]->ActionTwo);
										}
									}
								}
							}

							if (SavedControllerMaps[iActiveController]->Buttons[i]->ButtonType == DIC_POV)
							{
								if (SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber <= PoV)
								{
									long lDivergence = 4500;

									short ActivePoV = SavedControllerMaps[iActiveController]->Buttons[i]->sButtonNumber;

									if (PovValues[ActivePoV] != -1 && (LOWORD(PovValues[ActivePoV]) != 0xFFFF))
									{
										long lHigh = PovValues[ActivePoV] + lDivergence;
										long lLow = PovValues[ActivePoV] - lDivergence;

										if (false)
										{
										}
									}
								}
							}
						}
					}
				}
				if (FAILED(errors))
				{
					ActiveInput = IC_KEYBOARD;
				}
			}
		}
	}
}

bool PlayerController::LoadControllScheme()
{
	bool bReturn = false;

	std::fstream File;

	File.open("ControlerSettings.bin", std::fstream::in | std::fstream::binary);

	InputChoice InputReading;
	int iKeyBindCount;

	bool bErrors = false;

	//keyboard input temp values
	WPARAM KeyBind = 0;
	ControllerAction Action = 0;

	//DInput temp values
	GUID TempID;
	DInputStore* TempBinding = 0;
	DInputController* TempController = 0;

	//XInput temp values

	if (File.is_open())
	{
		while (!File.eof() && !bErrors)
		{
			File.read((char*)&InputReading, sizeof(InputChoice));
			File.read((char*)&iKeyBindCount, sizeof(int));

			if (InputReading == IC_KEYBOARD)
			{
				for (int i = 0; i < iKeyBindCount && !File.eof(); i++)
				{
					File.read((char*)&KeyBind, sizeof(WPARAM));
					File.read((char*)&Action, sizeof(ControllerAction));

					KeyBinds[KeyBind] = Action;

					KeyBind = 0;
					Action = 0;
				}
			}

			if (InputReading == IC_DIRECTINPUT)
			{
				File.read((char*)&TempID, sizeof(GUID));

				TempController = new DInputController;

				if (TempController != 0)
				{
					TempController->ControllerID = TempID;
					short sActions = 0;

					for (int i = 0; i < iKeyBindCount && !bErrors && !File.eof(); i++)
					{
						TempBinding = new DInputStore;
						
						if (TempBinding != 0)
						{
							File.read((char*)TempBinding, sizeof(DInputStore));

							TempController->Buttons.push_back(TempBinding);

							TempBinding = 0;

							sActions++;
						}
					}

					TempController->sButtons = sActions;

					if (sActions != 0 && !bErrors)
					{
						SavedControllerMaps.push_back(TempController);

						iControllerMaps++;

						TempController = 0;
					}
					else
					{
						for (int i = 0; i < sActions; i++)
						{
							delete TempController->Buttons[i];
						}
						TempController->Buttons.clear();

						delete TempController;
					}
				}
				else
				{
					bErrors = true;
				}
			}

			if (InputReading == IC_XINPUT)
			{
				for (int i = 0; i < iKeyBindCount && !File.eof(); i++)
				{
					//XInput stuff
				}
			}

			bReturn = true;
		}
	}

	if (bErrors)
	{
		bReturn = false;
	}

	return bReturn;
}

PlayerController* PlayerController::p_Controller = 0;