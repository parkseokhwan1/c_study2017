#include <stdio.h>

double mul(double x, double y)
{
	double res;

	res=x*y;
	return res;
}

int main()
{
	double a, b;
	double res;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=mul(a, b);
	printf("�� ���� ���� : %.1lf\n", res);
	return 0;
}