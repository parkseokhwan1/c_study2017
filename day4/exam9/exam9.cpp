// exam9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	double pi = 3.14;

	printf("%lf, %d \n", pi, pi);

	double tax;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%lf", &tax);
	printf("������ : %lf �Դϴ�.\n ", tax);

	printf("�ƹ� �Ǽ��� �Է��ϼ��� : ");
	float test;
	scanf_s("%f", &test);
	printf("%f�� �Է��ϼ̽��ϴ�. \n", test);

    return 0;
}

