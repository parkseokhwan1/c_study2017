#include "stdafx.h"

extern void win32_Printf(HWND, TCHAR *, ...);

void testProc3(HWND hWnd)
{
	static int nCount = 0;

	win32_Printf(hWnd, L"%d", nCount);
	nCount++;

	double ary[] = { 0.1, 0.3, 0.5, 0.7, 0.9 };
	static int i = 0;
	win32_Printf(hWnd, L"%d번째 호출할때 : %.1lf", i+1, ary[i]);
	i++;

}