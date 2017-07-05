#include <stdio.h>

double user_pow(double, int);

int main()
{
	double base;
	int exp;
	double res;


	printf("밑수를 입력하세요 : ");
	scanf("%lf", &base);
	printf("지수를 입력하세요 : ");
	scanf("%d", &exp);

	res=user_pow(base, exp);

	printf("거듭제곱은 %lf입니다.\n", res);
	return 0;
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
