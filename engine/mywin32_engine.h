#pragma once
namespace mywin32_engine {

	void makeMiniEditBox(HWND hWnd, int nPosX, int nPosY, int nHandle)
	{
		CreateWindow(L"edit", NULL,
			WS_CHILD | WS_BORDER | WS_VISIBLE,
			nPosX, nPosY, 100, 25, hWnd, (HMENU)nHandle, hInst, NULL);

	}

	void makeSimpleButton(HWND hWnd, TCHAR *pszText, int nPosX, int nPosY, int nHandle)
	{
		CreateWindow(L"button", L"ok", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
			nPosX, nPosY, 100, 25, hWnd, (HMENU)nHandle, hInst, NULL);
	}

	int GetControlValueInt(HWND hWnd, int nId)
	{
		TCHAR szBuf[256];
		GetWindowText(GetDlgItem(hWnd, nId), szBuf, 256);
		return _wtoi(szBuf);
	}

	double GetControlValueDouble(HWND hWnd, int nId)
	{
		TCHAR szBuf[256];
		GetWindowText(GetDlgItem(hWnd, nId), szBuf, 256);
		return _wtof(szBuf);
	}

	void SetControlValueInt(HWND hWnd, int nId, int nValue)
	{
		TCHAR szBuf[256];
		swprintf_s(szBuf, 256, L"%d", nValue);
		SetWindowText(GetDlgItem(hWnd, nId), szBuf);
	}

	void SetControlValueDouble(HWND hWnd, int nId, double nValue)
	{
		TCHAR szBuf[256];
		swprintf_s(szBuf, 256, L"%lf", nValue);
		SetWindowText(GetDlgItem(hWnd, nId), szBuf);
	}
}