#include <stdio.h>

int main()
{
	double inch, centi;

	printf("��Ƽ���� ���̸� �Է��ϼ��� : ");
	scanf("%lf", &centi);

	inch = centi * (1 / 2.54);

	printf("��ġ�� ����ϸ� %.1lf��ġ�Դϴ�.\n", inch);

	return 0;
}