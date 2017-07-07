#include "stdafx.h"
#include "resource.h"
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

DWORD g_dwGdiLoopFsm = 0;		//������������

void StartGDILoop()
{
	g_dwGdiLoopFsm = 10;
}
void StopGDILoop()
{
	g_dwGdiLoopFsm = 20;
}

void Test_DrawPath(Graphics *graphBackBuffer,Pen *pen)
{
	// �н� �׸���
	GraphicsPath pathObj;
	pathObj.AddLine(0, 0, 50, 50);
	pathObj.AddLine(50, 20, 100, 20);
	//pathObj.AddArc(Rect(100, 100, 50, 50), 0, 90);
	graphBackBuffer->DrawPath(pen, &pathObj);

	graphBackBuffer->DrawArc(pen, Rect(160, 100, 50, 50), 0, 90);

	graphBackBuffer->TranslateTransform(-50, 50);
	graphBackBuffer->DrawPie(pen, Rect(160, 100, 50, 50), 0, 90);
	graphBackBuffer->ResetTransform();
}

void Test_DrawRect(Graphics *graphBackBuffer, Pen *pen)
{
	graphBackBuffer->DrawRectangle(pen, Rect(160, 100, 100, 50));
}

void Test_DrawCurve(Graphics* graphBackBuffer, Pen *pen, Pen *pen2, Brush *brush)
{	
	// � �׸���
	Point points[] = {
	Point(50,50),
	Point(80,90),
	Point(120,90),
	Point(150,50)
	};

	for (int i = 0; i < 4; i++) {
	graphBackBuffer->TranslateTransform(-4, -4);
	graphBackBuffer->FillRectangle(brush, Rect(points[i], Size(8, 8)));
	graphBackBuffer->ResetTransform();

	}

	graphBackBuffer->DrawCurve(pen, points, 4);

	graphBackBuffer->DrawBezier(pen2, points[0], points[1], points[2], points[3]);

	
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
		Pen penYellow(Color(255, 255, 0));
		Pen penWhite(Color(255, 255, 255));
		Gdiplus::SolidBrush brushBlack(Color(0, 0, 0));
		Gdiplus::SolidBrush brushWhite(Color(255, 255, 255));
		Gdiplus::SolidBrush brushGreen(Color(0, 255, 0));
		FontFamily  fontFamily(L"����");
		Font        font(&fontFamily, 12, FontStyleRegular, UnitPixel);
		static LONG prev_tick;
		static SYSTEMTIME time;

		

		void(*Test_DrawFp)(Graphics*, Pen *);
		Test_DrawFp = NULL;

		while (!quit) {

			if (PeekMessage(&msg, NULL, NULL, NULL, PM_REMOVE))
			{
				if (msg.message == WM_QUIT)
					quit = true;
				else if (msg.message == WM_COMMAND){
					switch (msg.wParam)
					{
					case IDM_START:
						StartGDILoop();
						break;
					case IDM_TEST_PATH:
						Test_DrawFp = Test_DrawPath;
						break;
					case IDM_TEST_RECT:
						Test_DrawFp = Test_DrawRect;
						break;
					case IDM_TEST_CURVE:
						//Test_DrawFp = Test_DrawCurve;
						break;
					case IDM_TEST_NONE:
						Test_DrawFp = NULL;
						break;
					default:
						break;
					}
					
				}
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

					//������
					HDC hdc = GetDC(msg.hwnd);
					{
						Graphics graphics(hdc);
						graphBackBuffer->FillRectangle(&brushBlack, rectScreen);

						if (Test_DrawFp != NULL) {
							Test_DrawFp(graphBackBuffer, &penWhite);
						}

						graphics.DrawImage(&bmpMem, rectScreen);

						
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