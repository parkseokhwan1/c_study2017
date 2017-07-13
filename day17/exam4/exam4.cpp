// exam4.cpp : ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "exam4.h"

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
	plusEngine::startUpGdiPlus();
    // ���� ���ڿ��� �ʱ�ȭ�մϴ�.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_EXAM4, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // ���� ���α׷� �ʱ�ȭ�� �����մϴ�.
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EXAM4));

    MSG msg;
	plusEngine::GDIPLUS_Loop(msg, Rect(0, 0, 320, 240));

    return (int) msg.wParam;
}

GameObject g_ObjMissile;

GameObject *g_ObjMissiles[1024];
int g_nMissileCount;
Image *g_pImgMissile;

void OnCreate(HWND hWnd)
{
	g_ObjMissile.m_fRotation = 0;
	g_ObjMissile.m_fSpeed = 0;
	g_ObjMissile.m_vPosition = irr::core::vector2df(0, 0);
	g_pImgMissile = g_ObjMissile.m_pImg = new Image(L"../../res/missile/spr_missile.png");

	for (int i = 0; i < 1024; i++)
	{
		g_ObjMissiles[i] = NULL;
	}
	g_nMissileCount = 0;
}

void OnApply(double fDelta)
{
	GameObject_Apply(&g_ObjMissile, fDelta);
	for (int i = 0; i < 1024; i++)
	{
		if (g_ObjMissiles[i]) {
			GameObject_Apply(g_ObjMissiles[i], fDelta);

			if (g_ObjMissiles[i]->m_nFSM == 20) {
				delete g_ObjMissiles[i];
				g_ObjMissiles[i] = NULL;
			}
		}
	}
}

void OnRender(double fDelta, Graphics *grp)
{
	grp->Clear(Color(200, 191, 231));

	Pen pen(Color(0, 0, 0));
	//ȭ�� ����ǥ��
	grp->DrawLine(&pen, 0, 120, 320, 120);
	grp->DrawLine(&pen, 160, 0, 160, 240);
	grp->DrawRectangle(&pen, 0, 0, 320, 240);
	grp->SetTransform(&Matrix(1, 0, 0, 1, 160, 120));

	GameObject_Draw(&g_ObjMissile, *grp);

	for (int i = 0; i < 1024; i++)
	{
		if (g_ObjMissiles[i]) {
			GameObject_Draw(g_ObjMissiles[i], *grp);
		}
	}

	grp->ResetTransform();
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

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EXAM4));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_EXAM4);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

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
	case WM_LBUTTONDOWN:
	{
		int mx = LOWORD(lParam);
		int my = HIWORD(lParam);
		//g_ObjMissile.m_vPosition.set(mx - 160, my - 120);

		for (int i = 0; i < 1024; i++) {
			if (g_ObjMissiles[i] == NULL){
			GameObject *pObj = (GameObject *)malloc(sizeof(GameObject));
			pObj->m_nFSM = 0;
			pObj->m_pImg = g_pImgMissile;
			pObj->m_fRotation = 0;
			pObj->m_fSpeed = 10.0;
			pObj->m_fFuel = 5;
			pObj->m_vPosition = irr::core::vector2df(mx - 160, my - 120);
			g_ObjMissiles[i] = pObj;
			break;
			}
		}

	}
		break;
	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_RIGHT:
			g_ObjMissile.m_fSpeed += 0.5;
			break;
		case VK_LEFT:
			g_ObjMissile.m_fSpeed -= 0.5;
			break;
		default:
			break;
		}
		break;
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // �޴� ������ ���� �м��մϴ�.
            switch (wmId)
            {
			case IDM_START:
				OnCreate(hWnd);
				plusEngine::fpOnRender = OnRender;
				plusEngine::fpOnLoop = OnApply;
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
