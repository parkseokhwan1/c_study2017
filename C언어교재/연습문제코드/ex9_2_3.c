#include <stdio.h>

int main()
{
	int ary[]={1,2,3,4,5};
	int i, r;
	int temp;
	int size;

	size=sizeof(ary)/sizeof(ary[0]);

	printf("ó�� �迭�� ����� �� : ");
	for(i=0; i<size; i++){
		printf("%3d", ary[i]);
	}

	for(i=0; i<size/2; i++){
		r=size-1-i;
		temp=ary[i];
		ary[i]=ary[r];
		ary[r]=temp;
	}

	printf("\n�ٲ� �迭�� ����� �� : ");
	for(i=0; i<size; i++){
		printf("%3d", ary[i]);
	}

	return 0;
}