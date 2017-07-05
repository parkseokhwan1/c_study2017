// 571p. 예제19-5 모듈B : 두 정수값을 입력 받아 교환하고 출력하는 프로그램 

#include <stdio.h>

void print_value(int x, int y)
{
	printf("두 정수값 : %d, %d\n", x, y);
}

void exchange(int *ap, int *bp)
{
	int temp;

	temp = *ap;
	*ap = *bp;
	*bp = temp;
}

