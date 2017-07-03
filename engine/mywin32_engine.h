#pragma once
namespace mywin32_engine {
	namespace util {

		// , 로 구분되는 문자열을 실수형 배열을 만든다. 반환값은 생성된 실수의 갯수.
		int Buffer2DoubleArray(TCHAR *szBuf, double *pResult) {
			int nCount = 0;
			TCHAR *pwc;
			pwc = wcstok(szBuf, L", ");
			pResult[nCount++] = _wtof(pwc);
			while (pwc != NULL) {
				pwc = wcstok(NULL, L", ");
				if (pwc != NULL) {
					pResult[nCount++] = _wtof(pwc);
				}
			}
			return nCount;
		}
	}
	
	HWND makeTextBox(HWND hWnd, int nPosX, int nPosY, int nWidth, int nHeight, int nHandle)
	{
	
		return CreateWindow(L"static", L"", WS_CHILD | WS_VISIBLE | WS_BORDER,
			nPosX, nPosY, nWidth, nHeight,
			hWnd,
			(HMENU)nHandle, hInst, NULL);
	}

	HWND makeMiniEditBox(HWND hWnd, int nPosX, int nPosY, int nHandle)
	{
		return CreateWindow(L"edit", NULL,
			WS_CHILD | WS_BORDER | WS_VISIBLE | ES_AUTOHSCROLL,
			nPosX, nPosY, 100, 25, hWnd, (HMENU)nHandle, hInst, NULL);

	}

	HWND makeEditBox(HWND hWnd, int nPosX, int nPosY, int nWidth, int nHandle)
	{
		return CreateWindow(L"edit", NULL,
			WS_CHILD | WS_BORDER | WS_VISIBLE | ES_AUTOHSCROLL,
			nPosX, nPosY, nWidth, 25, hWnd, (HMENU)nHandle, hInst, NULL);

	}

	HWND makeSimpleButton(HWND hWnd, TCHAR *pszText, int nPosX, int nPosY, int nHandle)
	{
		return CreateWindow(L"button", pszText, WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
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
		swprintf_s(szBuf, 256, L"%.2lf", nValue);
		SetWindowText(GetDlgItem(hWnd, nId), szBuf);
	}
}