#include "iniReader.h"

IniReader * IniReader::GetReader()
{
	if (pInstance == 0)
	{
		pInstance = new IniReader;
	}

	return pInstance;
}

void IniReader::Destroy()
{
}

bool IniReader::ReadFile(LPCWSTR p_cFileName, map<string, int>* pMapReturn)
{
	bool bReturn = false;

	char* p_cFile = 0;

	ifstream File;

	if (p_cFileName != 0 && pMapReturn != 0)
	{
		int iLength = WideCharToMultiByte(CP_UTF8, WC_NO_BEST_FIT_CHARS, p_cFileName, -1, NULL, 0, NULL, NULL);

		p_cFile = new char[iLength];

		if (p_cFile != 0)
		{
			WideCharToMultiByte(CP_UTF8, WC_NO_BEST_FIT_CHARS, p_cFileName, -1, p_cFile, iLength, NULL, NULL);

			File.open(p_cFile, ios::in | ios::ate);

			if (File.is_open())
			{
				while (!File.eof())
				{
					string sLine;

					int iEquals = 0;
					bool bFound = false;

					getline(File, sLine);

					for (int i = 0; (sLine[i] != '\0' || sLine[i] != '\n') && !bFound; i++)
					{
						if (sLine[i] == '=')
						{
							bFound = true;
							iEquals = i;
						}
					}

					if (bFound)
					{
						string sNumber;
						string sValue;

						//sValue.copy(&sLine[0], iEquals);
					}
				}
			}
			else
			{
				MessageBoxEx(NULL, "can not open file", "try again numbnuts", MB_ICONERROR | MB_OK, NULL);
			}
		}
		else
		{
			MessageBoxEx(NULL, "cant convert unicode to ASCI", "try again numbnuts", MB_ICONERROR | MB_OK, NULL);
		}
	}
	else
	{
		MessageBoxEx(NULL, "Invalid arguments for loading an INI", "try again numbnuts", MB_ICONERROR | MB_OK, NULL);
	}
	

	return bReturn;
}

IniReader::IniReader()
{
}

IniReader::~IniReader()
{
	Destroy();
}

IniReader* IniReader::pInstance = 0;
