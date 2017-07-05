#include <stdio.h>

double get_item(double *);

int main()
{
	double ary[]={0.1, 0.3, 0.5, 0.7, 0.9};
	double res;

	res=get_item(ary);
	printf("첫번째 호출할 때 : %.1lf\n", res);

	res=get_item(ary);
	printf("두번째 호출할 때 : %.1lf\n", res);
	return 0;
}

double get_item(double *ap)
{
	static int i=0;
	double temp;

	temp=*(ap+i);
	i++;

	return temp;
}