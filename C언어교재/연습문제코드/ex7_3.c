#include <stdio.h>

int main()
{
	int n;
	int i;

	printf("양수를 입력하세요 : ");
	scanf("%d", &n);

	i=0;
	while(i<n){
		printf("*");
		i++;
		if(i%5==0) printf("\n");
	}
	return 0;
}