#include"Layer.h"
#include<fstream>

Layer::Layer()
{
}

Layer::~Layer()
{
	ClearEnitys();
}

bool Layer::LoadLayer(LPCWSTR cFileName)
{
	fstream File;
	bool bReturn = false;

	File.open(cFileName, std::fstream::in | std::fstream::binary);

	if (File.is_open())
	{
		void* p_vData = 0;

		char cCharCount;

		File.read(&cCharCount, sizeof(char));

		wchar_t* cTileName = new wchar_t[cCharCount];

		p_vData = cTileName;

		File.read(static_cast<char*>(p_vData), sizeof(wchar_t) * cCharCount);

		if (tileMap.LoadMapData(cTileName))
		{
			File.read(&cCharCount, sizeof(char));

			delete cTileName;

			cTileName = 0;

			p_vData = 0;

			Enity* loadedEnity = 0;
			char cSpriteName;
			
			bool bAnimated;
			int iFrames;
			int iFrameRate;
			float fStartX;
			float fStartY;

			D2D1_POINT_2F startPos;

			bool bErrorHappened = false;

			for (int i = 0; i < cCharCount && !(File.eof()) && !bErrorHappened; i++)
			{
				File.read(&cSpriteName, sizeof(char));

				cTileName = new wchar_t[cSpriteName];

				p_vData = cTileName;

				File.read(static_cast<char*>(p_vData), sizeof(wchar_t) * cSpriteName);

				p_vData = &bAnimated;

				File.read(static_cast<char*>(p_vData), sizeof(bool));

				p_vData = &iFrames;

				File.read(static_cast<char*>(p_vData), sizeof(int));
				
				p_vData = &iFrameRate;

				File.read(static_cast<char*>(p_vData), sizeof(int));

				p_vData = &fStartX;

				File.read(static_cast<char*>(p_vData), sizeof(float));

				p_vData = &fStartY;

				File.read(static_cast<char*>(p_vData), sizeof(float));

				startPos.x = fStartX;
				startPos.y = fStartY;

				loadedEnity = new Enity(cTileName, bAnimated, iFrames, iFrameRate, startPos);

				if (loadedEnity != 0)
				{
					iTotalEnitys++;
					vEnityList.push_back(loadedEnity);
				}
				else
				{
					bErrorHappened = true;
				}

				loadedEnity = 0;

				delete cTileName;

				p_vData = 0;
			}

			if (!bErrorHappened)
			{
				bReturn = true;
			}
		}
	}

	return bReturn;
}

bool Layer::SetScale(D2D1_POINT_2F NewScale, bool bScaleX, bool bScaleY)
{
	bool bReturn = true;

	if (bScaleX)
	{
		LayerMoveScale.x = NewScale.x;
	}
	if (bScaleY)
	{
		LayerMoveScale.y = NewScale.y;
	}

	tileMap.SetScale(LayerMoveScale);

	for (int i = 0; i < iTotalEnitys; i++)
	{
		vEnityList[i]->SetLayerScale(LayerMoveScale);
	}

	return bReturn;
}

void Layer::Draw()
{
	tileMap.DrawMap();

	for (int i = 0; i < iTotalEnitys; i++)
	{
		vEnityList[i]->Draw();
	}
}

void Layer::ClearEnitys()
{
	for (int i = 0; i < iTotalEnitys; i++)
	{
		delete vEnityList[i];
		vEnityList[i] = 0;
	}

	iTotalEnitys = 0;
	vEnityList.clear();
}