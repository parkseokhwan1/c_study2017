#include <stdio.h>

double div();

int main()
{
	double res;

	res=div();
	printf("������ ����� : %lf\n", res);

	return 0;
}

double div()
{
	double a, b, res;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=a/b;
	return res;
}