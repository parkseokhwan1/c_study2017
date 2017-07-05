// 218p. 예제7-4 : 무한 반복 프로그램 

#include <stdio.h>

int main()
{
	int sum=0;
	int n;

	while(1){
		printf("0또는 양수값을 입력하세요 : ");
		scanf("%d", &n);
		if(n<0) break;
		sum+=n;
	}
	printf("그 동안 누적된 값 : %d\n", sum);  
	return 0;
}
