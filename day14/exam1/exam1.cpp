// exam1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int *pA;

	//int a;
	//pA = &a;

	pA = (int *)malloc(4);

	*pA = 7;

	printf("%u \n", *pA);

	free(pA);

    return 0;
}

