#include <stdio.h>

void mul(double *, double *, double *);

int main()
{
	double res, a, b;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	mul(&res, &a, &b);

	printf("�� ���� ���� : %.2lf\n", res);
	return 0;
}

void mul(double *rp, double *ap, double *bp)
{
	*rp = *ap * *bp;
}