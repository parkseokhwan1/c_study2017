// 375p. 예제13-3 : 값을 전달하여 함수를 호출하는 경우 

#include <stdio.h>

int add_ten(int);

int main()
{
	int a=10;

	a=add_ten(a);
	printf("a : %d\n", a);
	return 0;
}

int add_ten(int b)
{
	b=b+10;
	return b;
}
