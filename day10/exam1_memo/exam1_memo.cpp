// exam1_memo.cpp : 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "exam1_memo.h"

#define MAX_LOADSTRING 100

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING];                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING];            // 기본 창 클래스 이름입니다.

// 이 코드 모듈에 들어 있는 함수의 정방향 선언입니다.
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

//전방선언
INT_PTR CALLBACK procMemoIns(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK procMemoDel(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK procMemoView(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

#include "../../engine/mywin32_engine.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: 여기에 코드를 입력합니다.

    // 전역 문자열을 초기화합니다.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_EXAM1_MEMO, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // 응용 프로그램 초기화를 수행합니다.
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EXAM1_MEMO));

    MSG msg;

    // 기본 메시지 루프입니다.
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  함수: MyRegisterClass()
//
//  목적: 창 클래스를 등록합니다.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EXAM1_MEMO));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_EXAM1_MEMO);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   함수: InitInstance(HINSTANCE, int)
//
//   목적: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   설명:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // 인스턴스 핸들을 전역 변수에 저장합니다.

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  목적:  주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 응용 프로그램 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//

TCHAR g_szBufferDB[1024] = L"helloworldgoodmorning";
int g_nTailIndex = 21;
int g_nTableStartIndex[256] = { 0,5,10,14 };
int g_nTableLength[256] = { 5,5,4,7 };
int g_nStringCount = 4;

HWND g_hLogText;

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
	case WM_CREATE:
	{
		g_hLogText = mywin32_engine::makeTextBox(hWnd, 0, 0, 320, 240, -1);
	}
		break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // 메뉴 선택을 구문 분석합니다.
            switch (wmId)
            {
			case IDM_MEMO_INS:
			{
				DialogBox(hInst, MAKEINTRESOURCE(IDD_INSERT), hWnd, procMemoIns);
			}
			break;
			case IDM_MEMO_DEL:
			{
				DialogBox(hInst, MAKEINTRESOURCE(IDD_DEL), hWnd, procMemoDel);
			}
			break;
			case IDM_MEMO_VIEW:
			{
				DialogBox(hInst, MAKEINTRESOURCE(IDD_VIEW), hWnd, procMemoView);
			}
			break;
			case IDM_DUMP:
			{
				TCHAR szBuf[256];
				int nBufIndex = 0;
				for (int i=0; i < g_nStringCount; i++) {
					int nStartIndex = g_nTableStartIndex[i];
					int nLength = g_nTableLength[i];

					for (int j = 0; j < nLength; j++) {
						szBuf[nBufIndex++] = g_szBufferDB[nStartIndex + j];
					}
					szBuf[nBufIndex++] = L'\n';
				}
				szBuf[nBufIndex++] = L'\0';

				SetWindowText(g_hLogText, szBuf);
			}
				break;
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다.
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}


// 메모추가 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK procMemoIns(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK)
		{
			//입력 문자열 얻기
			TCHAR szBuf[256];
			GetWindowText(GetDlgItem(hDlg, IDC_EDIT_INS), szBuf, 256);
			
			/*TCHAR *ptrSrc = szBuf;
			TCHAR *ptrStartAt = &(g_szBufferDB[g_nTailIndex]);

			while (*ptrSrc != 0x00) {
				*ptrStartAt = *ptrSrc;
				ptrSrc++;
				ptrStartAt++;
			}*/
			wcscat(g_szBufferDB, szBuf);

			g_nTableStartIndex[g_nStringCount] = g_nTailIndex;
			g_nTableLength[g_nStringCount] = wcslen(szBuf);
			g_nTailIndex += wcslen(szBuf);
			g_nStringCount++;

			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		else if (LOWORD(wParam) == IDCANCEL) {
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)FALSE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

// 메모삭제 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK procMemoDel(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK)
		{
			TCHAR szBuf[256];
			GetWindowText(GetDlgItem(hDlg, IDC_EDIT_DEL), szBuf, 256);
			int nDel = _wtoi(szBuf);

			g_nStringCount--;
			/*g_nTailIndex -= g_nTableLength[nDel];*/

			for (int i = nDel; i < g_nStringCount; i++) {
				g_nTableStartIndex[i] = g_nTableStartIndex[i + 1];
			}
			for (int i = nDel; i < g_nStringCount; i++) {
				g_nTableLength[i] = g_nTableLength[i + 1];
			}

			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		else if (LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)FALSE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

// 메모보기 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK procMemoView(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK )
		{
			TCHAR szBuf[256];
			GetWindowText(GetDlgItem(hDlg, IDC_EDIT_SEL), szBuf, 256);
			int nSel = _wtoi(szBuf);

			int nStartPos = g_nTableStartIndex[nSel];
			int nLength = g_nTableLength[nSel];

			/*int i = 0;
			TCHAR *buf = szBuf;
			TCHAR *db = g_szBufferDB;

			for (i = 0; i < nLength; i++) {
				*buf++ = db[nStartPos + i];
			}*/

			TCHAR *pTar = szBuf;
			TCHAR *pSrc = &(g_szBufferDB[nStartPos]);
			int i = 0;
			for (i = 0; i < nLength; i++) {
				//szBuf[i] = g_szBufferDB[nStartPos + i];
				*(pTar++) = *(pSrc++);
			}

			*pTar = 0x00;

			SetWindowText(g_hLogText, szBuf);

			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		else if (LOWORD(wParam) == IDCANCEL) {
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)FALSE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}