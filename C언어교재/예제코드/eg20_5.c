// 590p. ����20-5 : ���ǿ����ڸ� ����Ͽ� ���� ���� ���ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	int a, b;
	int min;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);

	min = (a<b) ? a : b;
	printf("���� ���� : %d�Դϴ�.\n", min);
	return 0;
}
