// 377p. ����13-4 : �����͸� �����Ͽ� �Լ��� ȣ���ϴ� ��� 

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
