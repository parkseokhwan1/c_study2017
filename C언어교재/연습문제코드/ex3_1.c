#include <stdio.h>

int main()
{
	int amount;
	double price, tax, total;

	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%d", &amount);

	price = 660 + (amount * 88.5);
	tax = price * 0.09;
	total = price + tax;

	printf("���� ������� %lf�� �Դϴ�.\n", total);
	return 0;
}