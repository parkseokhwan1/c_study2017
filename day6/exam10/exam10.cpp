// exam10.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void printSum(int a, int b)
{
	int sum = a + b;
	printf_s("sum : %d \n", sum);
}

int getSum(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	int sum;

	scanf("%d %d", &a, &b);
	printSum(a, b);

	sum = getSum(a, b);

	printf_s("%d \n", sum);

    return 0;
}

