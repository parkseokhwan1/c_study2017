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
	1,10,10,14,14,14,14, 1,
	1,14,10,14,10,14,14, 1,
	1,14,10,14,10,14,14, 1,
	1,14,10,10,10,14,14, 1,
	1,14,14,14,14,14,14, 1,
	1,14,14,14,14,14,14, 1,
	2, 2, 2, 2, 2, 2, 2, 2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,17, 17,17,14,14,14,1,
	1,14, 14,17,14,14,14,1,
	1,14, 17,17,14,14,14,1,
	1,14, 14,14,14,14,14,1,
	1,14, 14,14,14,14,14,1,
	1,14, 14,14,14,14,14,1,
	2, 2,  2, 2, 2, 2, 2,2
	},
	{
	3, 0, 0, 0, 0, 0, 0, 3,
	1,14,14,74,14,14,14, 1,
	1,74,14,74,14,14,14, 1,
	1,74,14,14,14,14,14, 1,
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
	1, 1, 1, 0, 0, 0, 0, 1,
	0, 0, 1, 0, 1, 0, 0, 1,
	1, 0, 1, 0, 1, 0, 0, 1,
	1, 0, 1, 1, 1, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 0, 0, 0, 1,
	1, 0, 0, 1, 0, 0, 0, 1,
	1, 0, 1, 1, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	0, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 1, 1, 1, 1, 1, 1
	},
	{
	1, 1, 1, 1, 1, 0, 1, 1,
	1, 0, 0, 1, 0, 0, 0, 1,
	1, 1, 0, 1, 0, 0, 0, 1,
	1, 1, 0, 0, 0, 0, 0, 1,
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
	0, 0, 1, 1, 1, 1, 0, 1,
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

//캐릭터 리젠위치, 열림 스위치 위치, 입구 위치, 탈출구 위치, 열쇠 위치
int g_StageInfo[][12] = {
	{
		1,1,		// 캐릭터 리젠위치
		5,3,39,		// 열림 스위치 위치
		0,0,		// 입구 위치
		7,2,		// 탈출구 위치
		6,6,27		// 열쇠 위치
	},
	{
		1,2,
		3,6,39,
		0,2,
		7,5,
		3,3,27
	},
	{
		1,5,
		6,1,39,
		0,5,
		5,7,
		2,2,27
	},
	{
		5,1,
		1,6,39,
		5,0,
		7,4,
		1,1,27
	},
	{
		1,4,
		4,6,39,
		0,4,
		7,6,
		4,1,27
	},
	{5,5,0,0,64,0,0,0,0,64}
};

//현재 스테이지
int g_nCurrentStage;

//최종 스테이지
int g_nFinalStage = 5;

//재출입 인덱스
static int g_nBackFront = 0;

//플레이어 위치
int g_nPlayerXpos;
int g_nPlayerYpos;

//열쇠 개수
int g_nPlayerKeyCount;

//문열림 스위치 오브젝트 
int g_nItemSwitchXpos = 5;
int g_nItemSwitchYpos = 3;
int g_nItemSwitchSprIndex;
int g_nItemSwitchStatus = 0;					// 0 : 스위치 멈춤, 1 : 스위치 작동
static int g_nItemSwitchStatusIndex = 0;		// 0 : 작동되지않은 스위치, 1: 작동한 스위치

// 열쇠 오브젝트
int g_nItemKeyXpos = 6;
int g_nItemKeyYpos = 6;
int g_nItemKeySprIndex = 70;
int g_nItemKeyStatus = 0;						// 0 : 열쇠 없음, 1 : 열쇠 존재
static int g_nItemKeyStatusIndex = 0;			// 0 : 열쇠 미소유, 1: 열쇠 소유

//입구 오브젝트
int g_nEnterPosX, g_nEnterPosY;

//탈출구 오브젝트
int g_nExitPosX, g_nExitPosY;
static int g_nExitStatus = 0;			//0 : 대기, 1 : 닫기, 2 : 열기 

const int g_nTileSize = 16;
const int g_nTileXCount = 8;

DWORD g_dwGdiLoopFsm = 0;		//루프상태제어

//앞스테이지로
void StartStage(int nStage)
{
	//처음위치
	g_nPlayerXpos = g_StageInfo[nStage][0];
	g_nPlayerYpos = g_StageInfo[nStage][1];
	g_nPlayerKeyCount = 0;

	//스위치
	g_nItemSwitchXpos = g_StageInfo[nStage][2];
	g_nItemSwitchYpos = g_StageInfo[nStage][3];
	g_nItemSwitchSprIndex = g_StageInfo[nStage][4];
	g_nItemSwitchStatus = 0;

	

	//입구
	g_nEnterPosX = g_StageInfo[nStage][5];
	g_nEnterPosY = g_StageInfo[nStage][6];

	//탈출구
	g_nExitPosX = g_StageInfo[nStage][7];
	g_nExitPosY = g_StageInfo[nStage][8];
	g_nExitStatus = 1;

	//열쇠 초기화
	g_nItemKeyXpos = g_StageInfo[nStage][9];
	g_nItemKeyYpos = g_StageInfo[nStage][10];
	g_nItemKeySprIndex = g_StageInfo[nStage][11];
	if (g_nItemKeyStatusIndex == 0) {
		g_nItemKeyStatus = 1;
	}
	else {
		g_nItemKeyStatus = 0;
	}
	
}

//앞 => 뒤 스테이지로
void BackStage(int nStage)
{
	//처음위치
	if (g_StageInfo[nStage][7] == 7) {
		g_nPlayerXpos = g_StageInfo[nStage][7] - 1;
		g_nPlayerYpos = g_StageInfo[nStage][8];
	}
	else {
		g_nPlayerXpos = g_StageInfo[nStage][7];
		g_nPlayerYpos = g_StageInfo[nStage][8] - 1;
	}
	g_nPlayerKeyCount = 0;

	//스위치
	g_nItemSwitchXpos = g_StageInfo[nStage][2];
	g_nItemSwitchYpos = g_StageInfo[nStage][3];
	g_nItemSwitchSprIndex = g_StageInfo[nStage][4];
	g_nItemSwitchStatus = 1;

	//입구
	g_nEnterPosX = g_StageInfo[nStage][5];
	g_nEnterPosY = g_StageInfo[nStage][6];

	//탈출구
	g_nExitPosX = g_StageInfo[nStage][7];
	g_nExitPosY = g_StageInfo[nStage][8];
	g_nExitStatus = 2;

	//열쇠 초기화
	g_nItemKeyXpos = g_StageInfo[nStage][9];
	g_nItemKeyYpos = g_StageInfo[nStage][10];
	g_nItemKeySprIndex = g_StageInfo[nStage][11];
	g_nItemKeyStatus = 0;	

}

//뒤 => 앞 스테이지로
void FrontStage(int nStage)
{
	//처음위치
	g_nPlayerXpos = g_StageInfo[nStage][0];
	g_nPlayerYpos = g_StageInfo[nStage][1];
	g_nPlayerKeyCount = 0;

	//스위치
	g_nItemSwitchXpos = g_StageInfo[nStage][2];
	g_nItemSwitchYpos = g_StageInfo[nStage][3];
	g_nItemSwitchSprIndex = g_StageInfo[nStage][4];
	if (g_nItemSwitchStatusIndex == 0) {
		g_nItemSwitchStatus = 0;
	}
	else {
		g_nItemSwitchStatus = 1;
	}

	//입구
	g_nEnterPosX = g_StageInfo[nStage][5];
	g_nEnterPosY = g_StageInfo[nStage][6];

	//탈출구
	g_nExitPosX = g_StageInfo[nStage][7];
	g_nExitPosY = g_StageInfo[nStage][8];
	g_nExitStatus = 2;

	//열쇠 초기화
	g_nItemKeyXpos = g_StageInfo[nStage][9];
	g_nItemKeyYpos = g_StageInfo[nStage][10];
	g_nItemKeySprIndex = g_StageInfo[nStage][11];
	g_nItemKeyStatus = 0;	// 1 : 존재, 0 : 없음

	//재출입 인덱스 초기화
	g_nBackFront--;

}

void StartGame()
{
	g_nCurrentStage = 0;
	StartStage(g_nCurrentStage);
	g_dwGdiLoopFsm = 10; //랜더링 활성화

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
	case 'W':
		g_nPlayerYpos--;
		break;
	case 'S':
		g_nPlayerYpos++;
		break;
	case 'A':
		g_nPlayerXpos--;
		break;
	case 'D':
		g_nPlayerXpos++;
		break;
	default:
		break;
	}
	//벽과 충돌 처리
	if (getMapTile(g_MapAttrBlock, g_nPlayerXpos, g_nPlayerYpos) == 1) {
		g_nPlayerXpos = savePosx;
		g_nPlayerYpos = savePosy;
	}

}

void drawTileIndex(Graphics *pGrp, Image *pImgBasicTile, int nPosX, int nPosY, int nTileIndex) {
	//int nTileIndex = pMap[nPosX + nPosY*g_nTileXCount];

	pGrp->DrawImage(pImgBasicTile,
		Rect(nPosX * 16, nPosY * 16, g_nTileSize, g_nTileSize),
		g_nTileSize * (nTileIndex % g_nTileXCount),				//원본 x 위치 
		g_nTileSize * (nTileIndex / g_nTileXCount),				//원본 y 위치
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
	//gdi plus 초기화 코드 
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;

	// Initialize GDI+.
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	//-----------------------------------------------------------------------

	{
		bool quit = false;
		//gdiplus 가 셧다운 되기전에 객체들이 삭제되어야 하므로 일부러 지역변수선언을 한단계 내려서 사용했다.
		Gdiplus::Rect rectScreen(0, 0, 384, 256);
		Bitmap bmpMem(rectScreen.Width, rectScreen.Height);
		Graphics* graphBackBuffer = Graphics::FromImage(&bmpMem);

		Pen penRed(Color(255, 0, 0));
		Gdiplus::SolidBrush brushBlack(Color(0, 0, 0));
		Gdiplus::SolidBrush brushWhite(Color(255, 255, 255));
		FontFamily  fontFamily(L"굴림");
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

					//게임 로직
					{
						static int i = 0;		// 스테이지 인덱스
						static int j = 0;		// 키 인덱스

						//스위치 로직 처리
						if (g_nItemSwitchStatus == 0) {
							if (g_nItemSwitchXpos == g_nPlayerXpos &&
								g_nItemSwitchYpos == g_nPlayerYpos &&
								g_nPlayerKeyCount + j> 0 &&
								g_nItemKeyStatusIndex == 1) {
								g_nItemSwitchStatus = 1;
								g_nItemSwitchStatusIndex = 1;
								g_nItemKeyStatusIndex = 0;
								g_nExitStatus = 2;
								g_nPlayerKeyCount--;
								j--;
								//setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 0);
								//setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 50);		// 문 열림 표시
							}
						}

						// 열쇠 획득 로직처리
						if (g_nItemKeyStatus == 1) {	//열쇠를 주울 수 있는 상태인가?
							if (g_nPlayerXpos == g_nItemKeyXpos &&
								g_nPlayerYpos == g_nItemKeyYpos
								) {
								g_nItemKeyStatus = 0;
								g_nItemKeyStatusIndex = 1;
								g_nPlayerKeyCount++;
								j++;
							}
						}

						//탈출구 로직 처리
						switch (g_nExitStatus)
						{
						case 0:
							//대기
							break;
						case 1:
						{
							//문 닫기
							setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 1);
							setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 48);
							g_nExitStatus = 0;		//대기 상태로
						}
							break;
						case 2:
						{
							//문 열기
							setMapTile(g_MapAttrBlock, g_nExitPosX, g_nExitPosY, 0);
							setMapTile(g_MapRooms, g_nExitPosX, g_nExitPosY, 50);
							g_nExitStatus = 0;		//대기 상태로
						}
							break;
						default:
							break;
						}
						
						

						// 문으로 나가기 검사
						//if (g_MapRooms[g_nCurrentStage][g_nPlayerYpos * 8 + g_nPlayerXpos] == 50) {
						if(g_nPlayerXpos == g_nExitPosX && g_nPlayerYpos == g_nExitPosY && g_nBackFront == 0){
							//g_ptrCurrentMap = g_MapRoom2;
							g_nCurrentStage += 1;	//다음판으로
							i += 1;
							StartStage(g_nCurrentStage);
							setMapTile(g_MapRooms, g_nEnterPosX, g_nEnterPosY, 50);
							//g_nPlayerXpos = 3;
							//g_nPlayerYpos = 3;
						}
						/*else {
							 if (g_nPlayerXpos == 2 && g_nPlayerYpos == 7) {
								g_MapRoom1[8 * 7 + 2] = 50;
							}  문 근처 가면 열림
						}*/
						else if(g_nPlayerXpos == g_nExitPosX && g_nPlayerYpos == g_nExitPosY && g_nBackFront > 0) {
							g_nCurrentStage += 1;	//다음판으로
							i += 1;
							FrontStage(g_nCurrentStage);
							setMapTile(g_MapRooms, g_nEnterPosX, g_nEnterPosY, 50);
						}

						
						
						// 뒤로가기
						if (g_nPlayerXpos == g_nEnterPosX && g_nPlayerYpos == g_nEnterPosY && g_nItemSwitchStatus == 1) {
							g_nCurrentStage -= 1;
							i -= 1;
							g_nBackFront++;
							BackStage(g_nCurrentStage);
						}
						else if(g_nPlayerXpos == g_nEnterPosX && g_nPlayerYpos == g_nEnterPosY && g_nItemSwitchStatus == 0){
							g_nCurrentStage -= 1;
							i -= 1;
							BackStage(g_nCurrentStage);
						}

						//상태창( 현재 스테이지 , 열쇠 개수)
						{
							HDC hdc = GetDC(msg.hwnd);

							TCHAR szStage[256];
							int nStage;
							GetWindowText(GetDlgItem(msg.hwnd, g_nCurrentStage), szStage, 256);
							nStage = _wtoi(szStage);

							TCHAR szKey[256];
							int nKey;
							GetWindowText(GetDlgItem(msg.hwnd, g_nPlayerKeyCount), szKey, 256);
							nKey = _wtoi(szKey);

							TCHAR szBuf[256];
							swprintf(szBuf, 256, L"현재 스테이지 : %d , 열쇠 개수 : %d", nStage + 1 + i, nKey + j);
							TextOut(hdc, 0, 300, szBuf, wcslen(szBuf));

							ReleaseDC(msg.hwnd, hdc);
						}


					}

					//랜더링
					HDC hdc = GetDC(msg.hwnd);
					{
						Graphics graphics(hdc);
						graphBackBuffer->FillRectangle(&brushBlack, rectScreen);

						//지도 그리기
						for (int ix = 0; ix < 8; ix++) {
							for (int iy = 0; iy < 8; iy++) {
								drawTile(graphBackBuffer,
									&imgBasicTile,
									ix, iy, g_MapRooms[g_nCurrentStage]);
							}
						}




						//플레이어 그리기
						graphBackBuffer->DrawImage(&imgPlayer,
							Rect((g_nPlayerXpos * 16) - 8, (g_nPlayerYpos * 16) - 8, 32, 32),	//대상위치
							32 * 1, 0, 32, 43,	//원본위치
							UnitPixel
						);

						//각종 아이템, 트리거, 기구물 그리기
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

						

						graphics.ScaleTransform(2.0, 2.0);
						graphics.DrawImage(&bmpMem, rectScreen);
						graphics.ResetTransform();

						//게임종료 메세지

						if (g_nFinalStage == g_nCurrentStage) {
							MessageBox(msg.hwnd, L"GAME OVER!", L"Congratulations", MB_OK);
							g_nFinalStage = 0;
						}


						
						
						

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
	//gdi plus 종료코드 
	GdiplusShutdown(gdiplusToken);
	//--------------------------------------


}