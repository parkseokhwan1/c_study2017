// 377p. 예제13-4 : 포인터를 전달하여 함수를 호출하는 경우 

#include <stdio.h>

void add_ten(int *);

int main()
{
	int a=10;

	add_ten(&a);
	printf("a : %d\n", a);
	return 0;
}

void add_ten(int *b)
{
	*b=*b+10;
}
