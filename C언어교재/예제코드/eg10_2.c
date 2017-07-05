// 294p. 예제10-2 : 함수를 호출하여 변수에 값을 저장하는 프로그램(포인터 사용)

#include <stdio.h>

void assign(int *);

int main()
{
	int cheoli=0;

	assign(&cheoli);
	printf("함수가 호출된 후에 cheoli에 저장된 값 : %d\n", cheoli);
	return 0;
}

void assign(int *ip)
{
	*ip=100;
}
