#pragma once
#include"Controller.h"
#include<dinput.h>
#include<map>
#include<vector>

enum DInputControll
{
	DIC_AXIS,
	DIC_POV,
	DIC_BUTTON
};

struct DInputStore
{
	DInputControll ButtonType;
	short sButtonNumber;
	ControllerAction ActionOne;
	ControllerAction ActionTwo;
	ControllerAction ActionThree;
	ControllerAction ActionFour;
};

struct DInputController
{
	GUID ControllerID;
	short sButtons;
	std::vector<DInputStore*> Buttons;
};

struct ControllerRequirments
{
	short sAxes;
	short sButtons;
	short sPoV;
};

enum InputChoice
{
	IC_KEYBOARD,
	IC_DIRECTINPUT,
	IC_XINPUT
};

class PlayerController : public virtual Controller
{
public:
	~PlayerController();

	void Release();

	static PlayerController* GetController();

	bool bStartup(HINSTANCE hinst);

	void PassWindowsMessage(UINT iMessage, WPARAM wPram, LPARAM lPram);

	bool AddDIController(DIDEVICEINSTANCE* p_NewController);

	bool LoadControllScheme();

	virtual ControllerAction PollController();
	virtual void Update();
private:
	PlayerController();

	InputChoice ActiveInput;

	std::map<WPARAM, ControllerAction> KeyBinds;

	//Direct Input controller varables
	GUID ControllerInUseID;
	std::vector<DInputController*> SavedControllerMaps;
	int iControllerMaps = 0;
	std::vector<DIDEVICEINSTANCE*> p_attachedControllers;
	int iControllers = 0;
	ControllerRequirments* p_ControllerRequirment;
	long* AxisValues = 0;
	long* PovValues = 0;
	float fDeadZone = 0.75f;

	short Axes = 0;
	short Buttons = 0;
	short PoV = 0;
	bool* bButtonUse = 0;
	DIJOYSTATE2 RawData;

	IDirectInput8* p_ControllerInterface = 0;
	IDirectInputDevice8* p_ActiveControllerDI = 0;

	static PlayerController* p_Controller;
};