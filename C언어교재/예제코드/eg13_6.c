// 386p. ����13-6 : �ܺ� ������ ����Ͽ� �� ���� �ٲٴ� ���α׷� 

#include <stdio.h>

void exchange();

int a, b;

int main()
{
	printf("������ �� ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	exchange();
	printf("a : %d, b: %d\n", a, b);
	return 0;
}

void exchange()
{
	int temp;

	temp=a;
	a=b;
	b=temp;
}
