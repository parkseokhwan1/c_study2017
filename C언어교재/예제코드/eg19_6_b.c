// 573p. 예제19-6 모듈B : 두 정수값을 입력 받아 교환하고 출력하는 프로그램(외부 변수 사용) 

#include <stdio.h>

void print_value()
{
	printf("두 정수값 : %d, %d\n", a, b);
}

void exchange()
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

