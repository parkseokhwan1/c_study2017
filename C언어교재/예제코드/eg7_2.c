// 210p. 예제7-2 : 1부터 10까지의 합을 구하는 프로그램 

#include <stdio.h>

int main()
{
	int i;
	int sum=0;

	for(i=1; i<=10; i++) {
		sum=sum+i;
	}
	printf("1부터 10까지의 합은 : %d\n", sum);
	return 0;
}
