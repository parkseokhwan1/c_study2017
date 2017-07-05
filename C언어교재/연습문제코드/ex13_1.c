#include <stdio.h>

void mul(double *, double *, double *);

int main()
{
	double res, a, b;

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	mul(&res, &a, &b);

	printf("두 수의 곱은 : %.2lf\n", res);
	return 0;
}

void mul(double *rp, double *ap, double *bp)
{
	*rp = *ap * *bp;
}