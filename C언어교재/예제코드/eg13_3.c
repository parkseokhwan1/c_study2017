// 375p. ����13-3 : ���� �����Ͽ� �Լ��� ȣ���ϴ� ��� 

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
