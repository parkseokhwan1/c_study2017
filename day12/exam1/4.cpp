#include "stdafx.h"
#include "../../engine/utils.h"

void procTest4(HWND hWnd)
{
/*
	TCHAR animal[][20] = {
		L"����",
		L"�����",
		L"ȣ����",
		L"����",
		L"�ݴް�"
	};
*/

	TCHAR *animals[5] = {
		L"����",
		L"�����",
		L"ȣ����",
		L"����",
		L"�ݴް�"
	};

	for (int i = 0; i < 5; i++) {
		win32_Printf(hWnd, L"%s", animals[i]);
	}

	win32_Printf(hWnd, L"%c", animals[0][1]);
	win32_Printf(hWnd, L"%c", animals[0][2]);

	win32_Printf(hWnd, L"%c", animals[1][1]);
	win32_Printf(hWnd, L"%c", animals[1][2]);

	win32_Printf(hWnd, L"%c", *((*(animals + 2)) + 1));

	win32_Printf(hWnd, L"%c", *((*(animals + 4)) + 2));
	win32_Printf(hWnd, L"%c", animals[4][2]);


}