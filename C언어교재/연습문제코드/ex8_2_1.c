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

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=mul(a, b);
	printf("두 수의 곱은 : %.1lf\n", res);
	return 0;
}