// 585p. 예제20-3 : 비트부정 연산자를 사용한 프로그램 

#include <stdio.h>

int main()
{
	int a=35;

	printf("a에 대한 1의 보수 값 : %u\n", ~a);    
	printf("a에 대한 2의 보수 값 : %d\n", ~a+1);  
	return 0;
}

