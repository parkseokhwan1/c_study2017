#include <stdio.h>

double div();

int main()
{
	double res;

	res=div();
	printf("나눗셈 결과는 : %lf\n", res);

	return 0;
}

double div()
{
	double a, b, res;
	
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=a/b;
	return res;
}