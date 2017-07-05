#include <stdio.h>

int main()
{
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double tot=0;
	double avg;
	int i;

	for(i=0; i<5; i++){
		tot+=*(ary+i);
	}

	avg=tot/5;
	printf("Æò±Õ°ª : %.2lf\n", avg);
	return 0;
}