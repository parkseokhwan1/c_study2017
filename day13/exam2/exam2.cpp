// exam2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

int sum(int a, int b)
{
	return a + b;
}

int mul(int c, int d)
{
	return c * d;
}

double avr(int a, int b)
{
	return (a + b) / 2.0;
}

int main()
{
	int(*fp)(int, int);

	fp = sum;

	printf("%ld \n", fp(3, 4));

	fp = mul;

	printf("%ld \n", fp(3, 4));

	double(*fp2)(int, int);
	fp2 = avr;
	printf("%.3lf \n", fp2(3, 4));

	// �Լ� �������� �迭
	int(*fps[2])(int, int);
	fps[0] = sum;
	fps[1] = mul;

	for (int i = 0; i < 2; i++) {
		printf("%ld \n", fps[i](3, 4));
	}

    return 0;
}

