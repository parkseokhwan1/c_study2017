#include <stdio.h>

double user_abs(double);

int main()
{
	double val;
	double res;


	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%lf", &val);

	res=user_abs(val);

	printf("���밪�� %lf�Դϴ�.\n", res);
	return 0;
}

double user_abs(double x)
{
	if(x<0.0) x=-x;
	return x;
}