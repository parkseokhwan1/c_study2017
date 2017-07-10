#include "stdafx.h"

#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")


int g_MapRooms[][64] = {
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	2, 2, 2, 2, 2, 2, 2, 2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14, 14,14,14,14,14, 1,
	1,14, 14,14,14,14,14, 1,
	1,14, 14,10,10,14,14, 1,
	1,14, 14,10,10,14,14, 1,
	1,14, 14,14,14,14,14, 1,
	1,14, 14,14,14,14,14, 1,
	2, 2,  2, 2, 2, 2, 2, 2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14, 14,14,14,14,14, 1,
	1,14, 14,14,14,14,14, 1,
	1,14, 14,14,14,14,14, 1,
	1,14, 17,17,17,14,14, 1,
	1,14, 14,14,17,14,14, 1,
	1,14, 17,17,17,14,14, 1,
	2, 2,  2, 2, 2, 2, 2, 2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14,14,74,14,14,14, 1,
	1,14,14,74,14,74,74, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	2, 2, 2, 2, 2, 2, 2, 2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14,14,21,14,21,14, 1,
	1,14,21,21,14,21,14, 1,
	1,14,14,14,14,21,14, 1,
	1,14,21,21,21,21,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	2, 2, 2, 2, 2, 2, 2, 2
	},
	{
	12, 12, 12, 12, 12, 12, 12, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 64, 64, 64, 64, 64, 64, 12,
	12, 12, 12, 12, 12, 12, 12, 12
	}
};

int g_MapAttrBlock[][64] = {
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 1, 1, 0, 0, 1,
	1, 0, 0, 1, 1, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 1, 1, 1, 0, 0, 1,
	1, 0, 0, 0, 1, 0, 0, 1,
	1, 0, 1, 1, 1, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 1, 0, 0, 0, 1,
	1, 0, 0, 1, 0, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 1, 0, 1, 0, 1,
	1, 0, 1, 1, 0, 1, 0, 1,
	1, 0, 0, 0, 0, 1, 0, 1,
	1, 0, 1, 1, 1, 1, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	}
};

//ĳ���� ������ġ, ���� ����ġ ��ġ, Ż�ⱸ ��ġ, ���� ��ġ
int g_StageInfo[][10] = {
	{
		3,2,		// ĳ���� ������ġ
		5,3,39,		// ���� ����ġ ��ġ
		7,2,		// Ż�ⱸ ��ġ
		6,6,27		// ���� ��ġ
	},
	{1,1,5,3,39,7,5,5,5,27},
	{2,2,6,1,39,5,7,3,5,27},
	{1,4,1,6,39,7,4,6,1,27},
	{1,6,4,6,39,7,6,4,1,27},
	{5,5,0,0,64,0,0,0,0,64}
};

int g_nCurrentStage;
int g_nPlayerXpos;
int g_nPlayerYpos;
int g_nPlayerKeyCount;

//������ ����ġ ������Ʈ 
int g_nItemSwitchXpos = 5;
int g_nItemSwitchYpos = 3;
int g_nItemSwitchSprIndex;
int g_nItemSwitchStatus = 0;			// 0 : ����ġ ����, 1 : ����ġ �۵�

// ���� ������Ʈ
int g_nItemKeyXpos = 6;
int g_nItemKeyYpos = 6;
int g_nItemKeySprIndex = 70;
int g_nItemKeyStatus = 0;

//Ż�ⱸ ������Ʈ
int g_nExitPosX, g_nExitPosY;
int g_nExitStatus = 0;			//0 : ���, 1 : �ݱ�, 2 : ���� 

const int g_nTileSize = 16;
const int g_nTileXCount = 8;

DWORD g_dwGdiLoopFsm = 0;		//������������

void StartStage(int nStage)
{
	g_nPlayerXpos = g_StageInfo[nStage][0];
	g_nPlayerYpos = g_StageInfo[nStage][1];
	g_nPlayerKeyCount = 0;

	//����ġ
	g_nItemSwitchXpos = g_StageInfo[nStage][2];
	g_nItemSwitchYpos = g_StageInfo[nStage][3];
	g_nItemSwitchSprIndex = g_StageInfo[nStage][4];
	g_nItemSwitchStatus = 0;	//��Ȱ�� ����

	//Ż�ⱸ
	g_nExitPosX = g_StageInfo[nStage][5];
	g_nExitPosY = g_StageInfo[nStage][6];
	g_nExitStatus = 1;

	//���� �ʱ�ȭ
	g_nItemKeyXpos = g_StageInfo[nStage][7];
	g_nItemKeyYpos = g_StageInfo[nStage][8];
	g_nItemKeySprIndex = g_StageInfo[nStage][9];
	g_nItemKeyStatus = 1;	// 1 : ����, 0 : ����
}

void StartGame()
{
	g_nCurrentStage = 0;
	StartStage(g_nCurrentStage);
	g_dwGdiLoopFsm = 10; //������ Ȱ��ȭ

}

int getMapTile(int (*pMap)[64], int mx, int my)
{
	return pMap[g_nCurrentStage][my * 8 + mx];
}

int setMapTile(int(*pMap)[64], int mx, int my, int nNewTile)
{
	int oldTile = pMap[g_nCurrentStage][my * 8 + mx];
	pMap[g_nCurrentStage][my * 8 + mx] = nNewTile;
	return oldTile;

}

void eventKeyDown(WPARAM wParam)
{
	int savePosx = g_nPlayerXpos;
	int savePosy = g_nPlayerYpos;
	switch (wParam)
	{
	case VK_UP:
		g_nPlayerYpos--;
		break;
	case VK_DOWN:
		g_nPlayerYpos++;
		break;
	case VK_LEFT:
		g_nPlayerXpos--;
		break;
	case VK_RIGHT:
		g_nPlayerXpos++;
		break;
	default:
		break;
	}
	//���� �浹 ó��
	if (getMapTile(g_MapAttrBlock, g_nPlayerXpos, g_nPlayerYpos) == 1) {
		g_nPlayerXpos = savePosx;
		g_nPlayerYpos = savePosy;

	}

}

void drawTileIndex(Graphics *pGrp, Image *pImgBasicTile, int nPosX, int nPosY, int nTileIndex) {
	//int nTileIndex = pMap[nPosX + nPosY*g_nTileXCount];

	pGrp->DrawImage(pImgBasicTile,
		Rect(nPosX * 16, nPosY * 16, g_nTileSize, g_nTileSize),
		g_nTileSize * (nTileIndex % g_nTileXCount),				//���� x ��ġ 
		g_nTileSize * (nTileIndex / g_nTileXCount),				//���� y ��ġ
		g_nTileSize, g_nTileSize,
		UnitPixel);
}

void drawTile(Graphics *pGrp, Image *pImgBasicTile, int nPosX, int nPosY, int *pMap) {
	int nTileIndex = pMap[nPosX + nPosY*g_nTileXCount];
	drawTileIndex(pGrp, pImgBasicTile, nPosX, nPosY, nTileIndex);
}


void GDIPLUS_Loop(MSG &msg)
{
	//----------------------------------------------------------------------
	//gdi plus �ʱ�ȭ �ڵ� 
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;

	// Initialize GDI+.
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	//-----------------------------------------------------------------------

	{
		bool quit = false;
		//gdiplus �� �˴ٿ� �Ǳ����� ��ü���� �����Ǿ�� �ϹǷ� �Ϻη� �������������� �Ѵܰ� ������ ����ߴ�.
		Gdiplus::Rect rectScreen(0, 0, 320, 240);
		Bitmap bmpMem(rectScreen.Width, rectScreen.Height);
		Graphics* graphBackBuffer = Graphics::FromImage(&bmpMem);

		Pen penRed(Color(255, 0, 0));
		Gdiplus::SolidBrush brushBlack(Color(0, 0, 0));
		Gdiplus::SolidBrush brushWhite(Color(255, 255, 255));
		FontFamily  fontFamily(L"����");
		Font        font(&fontFamily, 12, FontStyleRegular, UnitPixel);
		static LONG prev_tick;
		static SYSTEMTIME time;

		Image imgBasicTile(L"../../res/basictiles.png");		// 16 x 16
		Image imgPlayer(L"../../res/garota.png");		// 24 x 32

		while (!quit) {

			if (PeekMessage(&msg, NULL, NULL, NULL, PM_REMOVE))
			{
				if (msg.message == WM_QUIT)
					quit = true;
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			else {
				switch (g_dwGdiLoopFsm)
				{
				case 0:
					break;
				case 10:
				{
					GetSystemTime(&time);
					LONG time_ms = (time.wSecond * 1000) + time.wMilliseconds;
					float fDelta = (time_ms - prev_tick) / 1000.f;
					prev_tick = time_ms;

					//���� ����
					{
						//����ġ ���� ó��
						if (g_nItemSwitchStatus == 0) {
							if (g_nItemSwitchXpos == g_nPlayerXpos &&
								g_nItemSwitchYpos == g_nPlayerYpos &&
								g_nPlayerKeyCount > 0) {
								g_nItemSwitchStatus = 1;
								g_nExitStatus = 2;
								g_nPlayerKeyCount--;
								//setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 0);
								//setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 50);		// �� ���� ǥ��
							}
						}

						// ���� ȹ�� ����ó��
						if (g_nItemKeyStatus == 1) {	//���踦 �ֿ� �� �ִ� �����ΰ�?
							if (g_nPlayerXpos == g_nItemKeyXpos &&
								g_nPlayerYpos == g_nItemKeyYpos
								) {
								g_nItemKeyStatus = 0;
								g_nPlayerKeyCount++;
							}
						}

						//Ż�ⱸ ���� ó��
						switch (g_nExitStatus)
						{
						case 0:
							//���
							break;
						case 1:
						{
							//�� �ݱ�
							setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 1);
							setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 48);
							g_nExitStatus = 0;		//��� ���·�
						}
							break;
						case 2:
						{
							//�� ����
							setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 0);
							setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 50);
							g_nExitStatus = 0;		//��� ���·�
						}
							break;
						default:
							break;
						}

						// ������ ������ �˻�
						//if (g_MapRooms[g_nCurrentStage][g_nPlayerYpos * 8 + g_nPlayerXpos] == 50) {
						if(g_nPlayerXpos == g_nExitPosX && g_nPlayerYpos == g_nExitPosY){
							//g_ptrCurrentMap = g_MapRoom2;
							g_nCurrentStage += 1;	//����������
							StartStage(g_nCurrentStage);
							//g_nPlayerXpos = 3;
							//g_nPlayerYpos = 3;
						}
						/*else {
							 if (g_nPlayerXpos == 2 && g_nPlayerYpos == 7) {
								g_MapRoom1[8 * 7 + 2] = 50;
							}  �� ��ó ���� ����
						}*/
						
					}

					//������
					HDC hdc = GetDC(msg.hwnd);
					{
						Graphics graphics(hdc);
						graphBackBuffer->FillRectangle(&brushBlack, rectScreen);

						//���� �׸���
						for (int ix = 0; ix < 8; ix++) {
							for (int iy = 0; iy < 8; iy++) {
								drawTile(graphBackBuffer,
									&imgBasicTile,
									ix, iy, g_MapRooms[g_nCurrentStage]);
							}
						}

						//�÷��̾� �׸���
						graphBackBuffer->DrawImage(&imgPlayer,
							Rect((g_nPlayerXpos * 16) - 8, (g_nPlayerYpos * 16) - 8, 32, 32),	//�����ġ
							32 * 1, 0, 32, 43,	//������ġ
							UnitPixel
						);

						//���� ������, Ʈ����, �ⱸ�� �׸���
						if (g_nItemSwitchStatus == 0) {
							drawTileIndex(graphBackBuffer, &imgBasicTile, 
								g_nItemSwitchXpos, g_nItemSwitchYpos, 
								g_nItemSwitchSprIndex);

						}
						else {
							//
						}

						if (g_nItemKeyStatus == 1) {
							drawTileIndex(graphBackBuffer, &imgBasicTile,
								g_nItemKeyXpos, g_nItemKeyYpos,
								g_nItemKeySprIndex);
						}

						

						graphics.ScaleTransform(2.5, 2.5);
						graphics.DrawImage(&bmpMem, rectScreen);
						graphics.ResetTransform();
					}
					ReleaseDC(msg.hwnd, hdc);
				}
				break;
				default:
					break;
				}


			}
		}
	}

	//--------------------------------------
	//gdi plus �����ڵ� 
	GdiplusShutdown(gdiplusToken);
	//--------------------------------------


}