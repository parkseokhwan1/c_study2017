// 379p. ����13-5 : �Լ��� �����͸� �����ϴ� ��� 

#include <stdio.h>

int *add_ten(int);

int main()
{
	int a=10;
	int *ap;

	ap=add_ten(a);
	printf("a : %d\n", *ap);
	return 0;
}

int *add_ten(int b)
{
	b=b+10;
	return &b;
}
