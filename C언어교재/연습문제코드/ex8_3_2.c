#include <stdio.h>

double user_pow(double, int);

int main()
{
	double base;
	int exp;
	double res;


	printf("�ؼ��� �Է��ϼ��� : ");
	scanf("%lf", &base);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &exp);

	res=user_pow(base, exp);

	printf("�ŵ������� %lf�Դϴ�.\n", res);
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
