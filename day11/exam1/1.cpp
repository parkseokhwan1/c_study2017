#include "stdafx.h"

extern void win32_Printf(HWND hWnd, TCHAR *fmt, ...);

void test1(HWND hWnd)
{
	static int nIndex = 0;
	win32_Printf(hWnd, L"%d �ε���", nIndex++);
}

void input()
{
	int a, b;
	a = 1;
	b = 2;
}

void test2(HWND hWnd)
{
	int a, b;
	a = 3; b = 4;
	input();
	win32_Printf(hWnd, L"%d %d", a,b);

	{
		a = 11; b = 12;			//�����ܰ� ������ ���� ����
		win32_Printf(hWnd, L"%d %d", a, b);
	}
	win32_Printf(hWnd, L"%d %d", a, b);

	a = 3; b = 4;
	{
		int a, b;				//�ڵ����� ����
		a = 11; b = 12;			//���������� ��ȿ�� �ڵ������� ���� ����
		win32_Printf(hWnd, L"%d %d", a, b);
	}
	win32_Printf(hWnd, L"%d %d", a, b);

}