#include <stdio.h>

int main()
{
	int amount;
	double price, tax, total;

	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &amount);

	price = 660 + (amount * 88.5);
	tax = price * 0.09;
	total = price + tax;

	printf("전기 사용요금은 %lf원 입니다.\n", total);
	return 0;
}