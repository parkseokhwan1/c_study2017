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

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &radius);

	result=area(radius);
	printf("������ : %.3lf�Դϴ�.\n", result);
	return 0;
}