#include <stdio.h>

double get_next(double *);
double get_before(double *);

int i;

int main()
{
	double ary[]={0.1, 0.3, 0.5, 0.7, 0.9};

	printf("next호출 : %.1lf\n", get_next(ary));
	printf("next호출 : %.1lf\n", get_next(ary));
	printf("before호출 : %.1lf\n", get_before(ary));
	printf("before호출 : %.1lf\n", get_before(ary));

	return 0;
}

double get_next(double *ap)
{
	double temp;

	temp=ap[i];
	i++;
	return temp;
}

double get_before(double *ap)
{
	double temp;

	temp=ap[i];
	i--;
	return temp;
}
