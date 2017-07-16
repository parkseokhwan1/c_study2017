// exam14.cpp : ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "exam14.h"

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

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: ���⿡ �ڵ带 �Է��մϴ�.

    // ���� ���ڿ��� �ʱ�ȭ�մϴ�.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_EXAM14, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // ���� ���α׷� �ʱ�ȭ�� �����մϴ�.
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EXAM14));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EXAM14));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_EXAM14);
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
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
	case WM_CREATE:
	{
		CreateWindow(L"edit", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER | CBS_AUTOHSCROLL,
			10, 10, 100, 25, hWnd,(HMENU)3001,hInst,NULL
		);

		CreateWindow(L"edit", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER | CBS_AUTOHSCROLL,
			120, 10, 100, 25, hWnd, (HMENU)3002, hInst, NULL
		);

		CreateWindow(L"button", L"���ϱ�",
			WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
			10, 10 + 25 + 5, 100, 25, hWnd, (HMENU)4001, hInst, NULL
		);

		CreateWindow(L"button", L"����",
			WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
			120, 10 + 25 + 5, 100, 25, hWnd, (HMENU)4002, hInst, NULL
		);

		CreateWindow(L"button", L"���ϱ�",
			WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
			120 + 10 + 100, 10 + 25 + 5, 100, 25, hWnd, (HMENU)4003, hInst, NULL
		);

		CreateWindow(L"button", L"������",
			WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
			120 + 10 + 100 + 100 + 10, 10 + 25 + 5, 100, 25, hWnd, (HMENU)4004, hInst, NULL
		);

	}
		break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // �޴� ������ ���� �м��մϴ�.
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;

			case 4001:
			{
				HWND hEdit = GetDlgItem(hWnd, 3001);
				TCHAR szBuf[256];
				GetWindowText(hEdit, szBuf, 256);
				int num1 = _wtoi(szBuf);

				HWND hEdit2 = GetDlgItem(hWnd, 3002);
				TCHAR szBuf2[256];
				GetWindowText(hEdit2, szBuf2, 256);
				int num2 = _wtoi(szBuf2);

				int sum = num1 + num2;

				TCHAR szOutput[256];

				swprintf_s(szOutput,256,L"���� %d ", sum);

				MessageBox(hWnd, szOutput,L"���", MB_OK);
			}
				break;

			case 4002:
			{
				HWND hEdit = GetDlgItem(hWnd, 3001);
				TCHAR szBuf[256];
				GetWindowText(hEdit, szBuf, 256);
				int num1 = _wtoi(szBuf);

				HWND hEdit2 = GetDlgItem(hWnd, 3002);
				TCHAR szBuf2[256];
				GetWindowText(hEdit2, szBuf2, 256);
				int num2 = _wtoi(szBuf2);

				int min = num1 - num2;

				TCHAR szOutput[256];

				swprintf_s(szOutput, 256, L"���� %d ", min);

				MessageBox(hWnd, szOutput, L"���", MB_OK);
			}
			break;

			case 4003:
			{
				HWND hEdit = GetDlgItem(hWnd, 3001);
				TCHAR szBuf[256];
				GetWindowText(hEdit, szBuf, 256);
				int num1 = _wtoi(szBuf);

				HWND hEdit2 = GetDlgItem(hWnd, 3002);
				TCHAR szBuf2[256];
				GetWindowText(hEdit2, szBuf2, 256);
				int num2 = _wtoi(szBuf2);

				int mul = num1 * num2;

				TCHAR szOutput[256];

				swprintf_s(szOutput, 256, L"���� %d ", mul);

				MessageBox(hWnd, szOutput, L"���", MB_OK);
			}
			break;

			case 4004:
			{
				HWND hEdit = GetDlgItem(hWnd, 3001);
				TCHAR szBuf[256];
				GetWindowText(hEdit, szBuf, 256);
				int num1 = _wtoi(szBuf);

				HWND hEdit2 = GetDlgItem(hWnd, 3002);
				TCHAR szBuf2[256];
				GetWindowText(hEdit2, szBuf2, 256);
				int num2 = _wtoi(szBuf2);

				int div = num1 / num2;

				TCHAR szOutput[256];

				swprintf_s(szOutput, 256, L"���� %d ", div);

				MessageBox(hWnd, szOutput, L"���", MB_OK);
			}
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
            // TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�.
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
