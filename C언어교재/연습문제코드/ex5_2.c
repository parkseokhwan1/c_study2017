#include <stdio.h>

int main()
{
	int a, b;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	printf("������ ������� \"%d / %d = %lf\"�Դϴ�.\n", a, b, (double)a/b);

	return 0;
}