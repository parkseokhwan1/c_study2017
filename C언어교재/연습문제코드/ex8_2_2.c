#include <stdio.h>

double area(double r)
{
	double res;

	res=3.14*r*r;
	return res;
}

int main()
{
	double radius;
	double result;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	result=area(radius);
	printf("면적은 : %.3lf입니다.\n", result);
	return 0;
}