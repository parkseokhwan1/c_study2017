#include <stdio.h>

int main()
{
	int n;
	int sum=0;

	printf("양수를 입력하세요 : ");
	scanf("%d", &n);

	while(n>=0){
		sum=sum+n;
		printf("지금까지 입력된 값의 합 : %d\n", sum);
		printf("양수를 입력하세요 : ");
		scanf("%d", &n);
	}

	return 0;
}