#include <stdio.h>

void exchange(double *, double *);
void func(void (*)(double *, double *), double, double);

int main()
{
	double a=10, b=20;

	func(exchange, a, b);
	return 0;
}

void func(void (*fp)(double *, double *), double a, double b)
{
	printf("�ٲٱ� ���� a, b�� �� : %lf, %lf\n", a, b);
	fp(&a, &b);
	printf("�ٲ� ���� a, b�� �� : %lf, %lf\n", a, b);
}

void exchange(double *ap, double *bp)
{
	double tp;

	tp=*ap;
	*ap=*bp;
	*bp=tp;
}