// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>

void sum_int_3(void *pParam)
{
	int a = *(int *)((BYTE *)pParam + 0);
	int b = *(int *)((BYTE *)pParam + 4);
	int c = *(int *)((BYTE *)pParam + 8);

	printf("sum3 : %d \n", a + b + c);
}

void sum_int_2(void *pParam)
{
	int a = *(int *)((BYTE *)pParam + 0);
	int b = *(int *)((BYTE *)pParam + 4);

	printf("sum2 : %d \n", a + b);
}

int main()
{
	BYTE Buffer[256];
	void *pParam = Buffer;
	void(*fpSum)(void *);

	int a = 3;
	int b = 4;
	int c = 5;

	memcpy(pParam, &a, 4);
	memcpy((BYTE *)pParam + 4, &b, 4);
	memcpy((BYTE *)pParam + 8, &c, 4);
	fpSum = sum_int_3;

	fpSum(pParam);

	int e = 11;
	int f = 12;
	memcpy(pParam, &e, 4);
	memcpy((BYTE *)pParam + 4, &f, 4);
	fpSum = sum_int_2;
	fpSum(pParam);

    return 0;
}

