// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int a = 1;
	double b = 3.14;

	void *pVoid;
	int *pInt;
	double *pDouble;

	pInt = &a;
	printf("%d \n", *pInt);

	pInt = (int *)&b;
	printf("%lf \n", *((double *)pInt));


	pVoid = &a;
	printf("%d \n", *((int *)pVoid));

	pVoid = &b;
	printf("%lf \n", *((double *)pVoid));

    return 0;
}

