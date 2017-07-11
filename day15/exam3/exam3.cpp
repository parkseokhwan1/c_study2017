// exam3.cpp : ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "exam3.h"

#include "tilemap.h"

#define MAX_LOADSTRING 100

// ���� ����:
HINSTANCE hInst;                                // ���� �ν��Ͻ��Դϴ�.
WCHAR szTitle[MAX_LOADSTRING];                  // ���� ǥ���� �ؽ�Ʈ�Դϴ�.
WCHAR szWindowClass[MAX_LOADSTRING];            // �⺻ â Ŭ���� �̸��Դϴ�.

// �� �ڵ� ��⿡ ��� �ִ� �Լ��� ������ �����Դϴ�.
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK procTileSelDlg(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK procTileScriptDlg(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: ���⿡ �ڵ带 �Է��մϴ�.

	//----------------------------------------------------------------------
	//gdi plus �ʱ�ȭ �ڵ� 
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;

	// Initialize GDI+.
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
	//-----------------------------------------------------------------------

    // ���� ���ڿ��� �ʱ�ȭ�մϴ�.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_EXAM3, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // ���� ���α׷� �ʱ�ȭ�� �����մϴ�.
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EXAM3));

    MSG msg;

    // �⺻ �޽��� �����Դϴ�.
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

	//--------------------------------------
	//gdi plus �����ڵ� 
	GdiplusShutdown(gdiplusToken);
	//--------------------------------------

    return (int) msg.wParam;
}



//
//  �Լ�: MyRegisterClass()
//
//  ����: â Ŭ������ ����մϴ�.
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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EXAM3));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_EXAM3);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   �Լ�: InitInstance(HINSTANCE, int)
//
//   ����: �ν��Ͻ� �ڵ��� �����ϰ� �� â�� ����ϴ�.
//
//   ����:
//
//        �� �Լ��� ���� �ν��Ͻ� �ڵ��� ���� ������ �����ϰ�
//        �� ���α׷� â�� ���� ���� ǥ���մϴ�.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // �ν��Ͻ� �ڵ��� ���� ������ �����մϴ�.

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
//  �Լ�: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ����:  �� â�� �޽����� ó���մϴ�.
//
//  WM_COMMAND  - ���� ���α׷� �޴��� ó���մϴ�.
//  WM_PAINT    - �� â�� �׸��ϴ�.
//  WM_DESTROY  - ���� �޽����� �Խ��ϰ� ��ȯ�մϴ�.
//
//

S_GAMEMAP g_GameMap;

int g_nCurrentTileIndex;

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
	case WM_CREATE:
		g_nCurrentTileIndex = 1;

		InitMap(&g_GameMap, 8, 8, L"../../res/loveable_rogue.png", 16, 16);
		SetTilePosition(&g_GameMap, 0, 177, 0);
		SetTilePosition(&g_GameMap, 16, 177, 1);
		SetTilePosition(&g_GameMap, 16 * 2, 177, 2);
		SetTilePosition(&g_GameMap, 16 * 3, 177, 3);
		
		break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // �޴� ������ ���� �м��մϴ�.
            switch (wmId)
            {
			case IDM_MAP_SAVE:
			{
				FILE *fp;

				fp = fopen("mapsave.png", "wb");

				fwrite(&g_GameMap, g_GameMap.m_TileWidth * g_GameMap.m_TileHeight, 1, fp);

				fclose(fp);
			}
				break;
			case IDM_MAP_LOAD:
			{
				FILE *fp;

				fp = fopen("mapsave.png", "rb");

				fread(&g_GameMap, g_GameMap.m_TileWidth * g_GameMap.m_TileHeight, 1, fp);

				fclose(fp);

				InvalidateRect(hWnd, NULL, TRUE);
			}
				break;
			case IDM_SCRIPT:
				DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG_SCRIPT), hWnd, procTileScriptDlg);
				InvalidateRect(hWnd, NULL, TRUE);
				break;
			case IDM_TILE_SEL:
				DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG_SELECT_TILE), hWnd, procTileSelDlg);
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
	case WM_LBUTTONDOWN:
	{
		int mx = LOWORD(lParam);
		int my = HIWORD(lParam);
		TCHAR szBuf[256];
		swprintf(szBuf, L"%d , %d \n", mx / g_GameMap.m_TileWidth, my / g_GameMap.m_TileHeight);
		OutputDebugString(szBuf);

		if (mx < 128 && my < 128) {
			SetMapIndex(&g_GameMap,
				mx / g_GameMap.m_TileWidth, my / g_GameMap.m_TileHeight,
				g_nCurrentTileIndex);
		}
		else if (my < 16 && mx > 144) {
			swprintf(szBuf, L"%d \n", mx / g_GameMap.m_TileWidth);
			OutputDebugString(szBuf);
			g_nCurrentTileIndex = (mx / g_GameMap.m_TileWidth) - 8;
		}

		InvalidateRect(hWnd, NULL, TRUE);

	}
		break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�.
			Graphics grp(hdc);
			//DrawTile(&g_GameMap, &grp, 0, 0, 1);
			DrawMap(&g_GameMap, &grp, 0, 0);

			Pen penBlack(Color(255, 0, 0, 0));
			grp.DrawRectangle(&penBlack, Rect(0, 0, 128, 128));

			DrawTilePalette(&g_GameMap, &grp, 9, 0);

			// ���� ���õ� Ÿ�� ǥ��
			grp.TranslateTransform(160, 32);	// Ÿ�� �̵��Ŀ� Ȯ��
			grp.ScaleTransform(4, 4);			
			DrawTile(&g_GameMap, &grp, 0, 0, g_nCurrentTileIndex - 1);

			grp.ResetTransform();

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

// ���� ��ȭ ������ �޽��� ó�����Դϴ�.
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

// Ÿ�ϼ��� ��ȭ ������ �޽��� ó�����Դϴ�.
INT_PTR CALLBACK procTileSelDlg(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
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
			GetWindowText(GetDlgItem(hDlg, IDC_EDIT_SELTILE), szBuf, 64);

			g_nCurrentTileIndex = _wtoi(szBuf);

			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		else if(LOWORD(wParam) == IDCANCEL){
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)FALSE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}

// Ÿ�Ͻ�ũ��Ʈ ��ȭ ������ �޽��� ó�����Դϴ�.
INT_PTR CALLBACK procTileScriptDlg(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
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
			GetWindowText(GetDlgItem(hDlg, IDC_EDIT_SCRIPT), szBuf, 64);

			TCHAR *token;
			token = wcstok(szBuf, L", ");

			//SetMapIndex
			if ( !wcscmp(L"smi", token) ) {				//�ٸ� Ÿ�� ����
				int x, y, idx;
				token = wcstok(NULL, L", ");
				x = _wtoi(token);
				token = wcstok(NULL, L", ");
				y = _wtoi(token);
				token = wcstok(NULL, L", ");
				idx = _wtoi(token);
				SetMapIndex(&g_GameMap, x, y, idx);
			}
			else if( !wcscmp(L"stp", token) ){			//���� Ÿ�� ����
				int x, y, idx;
				token = wcstok(NULL, L", ");
				x = _wtoi(token);
				token = wcstok(NULL, L", ");
				y = _wtoi(token);
				token = wcstok(NULL, L", ");
				idx = _wtoi(token);
				SetTilePosition(&g_GameMap, x, y, idx);
			}
			/*else if ( !wcscmp(L"dtl", token) ) {
				int x, y, idx;
				token = wcstok(NULL, L", ");
				x = _wtoi(token);
				token = wcstok(NULL, L", ");
				y = _wtoi(token);
				token = wcstok(NULL, L", ");
				idx = _wtoi(token);
				DrawTile(&g_GameMap, x, y, idx);
			}*/
			else {
				MessageBox(hDlg, L"���������ʴ� ��ũ��Ʈ�Դϴ�.", L"", MB_OK);
			}

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
