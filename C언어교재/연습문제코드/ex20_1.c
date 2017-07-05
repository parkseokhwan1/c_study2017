#include <stdio.h>

int main()
{
	int n;
	int i;
	int size=sizeof(int)*8;

	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);

	for(i=1; i<=size; i++){
		if(n>>(size-i) & 1) putchar('1');
		else putchar('0');
		if(i%4==0) putchar(' ');
	}

	return 0;
}