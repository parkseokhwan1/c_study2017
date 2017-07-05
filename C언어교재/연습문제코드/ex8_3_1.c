#include <stdio.h>

double user_abs(double);

int main()
{
	double val;
	double res;


	printf("숫자 하나를 입력하세요 : ");
	scanf("%lf", &val);

	res=user_abs(val);

	printf("절대값은 %lf입니다.\n", res);
	return 0;
}

double user_abs(double x)
{
	if(x<0.0) x=-x;
	return x;
}