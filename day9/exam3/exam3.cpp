// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int *ap = ary;

	printf("%d \n", *(ary + 1));
	printf("%d \n", *(ap + 1));
	ap = ap + 1;
	printf("%d \n", *(ap + 1));

	// ary = ary + 1; -> ���Ⱑ ��������.(�迭���� ���)


    return 0;
}

