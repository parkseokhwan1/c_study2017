#include "stdafx.h"
#include "../../engine/utils.h"

void swapString(TCHAR **str1, TCHAR **str2) 
{
	TCHAR *szTemp;
	szTemp = *str1;
	*str1 = *str2;
	*str2 = szTemp;
}

void printArray(HWND hWnd, TCHAR **ptr1, int nCount)
{
	int i;
	for (int i = 0; i < nCount; i++)
	{
		win32_Printf(hWnd, L"%s", ptr1[i]);
	}
}

void procTest5(HWND hWnd)
{
	int val = 100;
	int *ip = &val;
	int **ipp = &ip;
	int ***ippp = &ipp;

	win32_Printf(hWnd, L"%d %d, %d", val, *ip, **ipp);

	win32_Printf(hWnd, L"%d, %d", ip, ipp);

	win32_Printf(hWnd, L"%d %d, %d", *ippp, **ippp, ***ippp);

	TCHAR *szStr[2] = {
		L"�ȳ��ϼ���", L"���� ����� �Դϴ�."
	};

	swapString(&szStr[0], &szStr[1]);

	//TCHAR *szTemp;
	//szTemp = szStr[0];
	//szStr[0] = szStr[1];
	//szStr[1] = szTemp;

	win32_Printf(hWnd, L"%s %s", szStr[0], szStr[1]);

	TCHAR *ptr_ary[] = { L"����", L"��", L"Ƽ���", L"������", L"�Ƹ�������" };
/*
	int nCount = sizeof(ptr_ary) / sizeof(ptr_ary[0]);

	for (int i = 0; i < nCount; i++) {
		win32_Printf(hWnd, L"%s", ptr_ary[i]);
	}
*/
	
	printArray(hWnd, ptr_ary, sizeof(ptr_ary)/sizeof(ptr_ary[0]));
	
}