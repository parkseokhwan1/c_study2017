#include <stdio.h>

int main()
{
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double *ap=ary+4;
	int i;

	for(i=0; i<5; i++){
		printf("%.1lf  ", *ap);
		ap--;
	}

	return 0;
}