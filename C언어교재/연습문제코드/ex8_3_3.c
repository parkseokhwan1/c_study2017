#include <stdio.h>

double user_abs(double);
double user_pow(double, int);

int main()
{
	double x;
	double power, result;

	printf("x의 값을 입력하세요 : ");
	scanf("%lf", &x);

	power = 2 * user_pow(x, 3) + 3 * user_pow(x, 2) + 4;
	result = user_abs(power);

	printf("결과값은 %lf입니다.\n", result);
	return 0;
}

double user_abs(double x)
{
	if(x<0.0) x=-x;
	return x;
}

double user_pow(double base, int exp)
{
	int i;
	double res=1;

	for(i=0; i<exp; i++){
		res=res*base;
	}

	return res;
}