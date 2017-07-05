// 583p. 예제20-2 : 비트별 배타적 논리합연산자를 사용한 프로그램 

#include <stdio.h>

int main()
{
	char a='a', m=32;

	a=a^m;	
	printf("a의 값 : %c\n", a);
	a=a^m;	
	printf("a의 값 : %c\n", a);
	return 0;
}

