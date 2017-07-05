// 214p. 예제7-3 : 1부터 n까지의 합을 반복하는 프로그램 

#include <stdio.h>

int main()
{
	int n;
	int i;
	int sum;

	printf("양수를 입력하세요 : ");
	scanf("%d", &n);

	while(n>0){
		sum=0;
		for(i=1; i<=n; i++){
			sum+=i;
		}
		printf("1부터 %d까지의 합은 : %d\n", n, sum);  
		printf("양수를 입력하세요 : ");    
		scanf("%d", &n);        
	}
	return 0;
}
