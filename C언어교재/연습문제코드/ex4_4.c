#include <stdio.h>

int main()
{
	int mileage, speed;
	int hour, rest;

	printf("�Ÿ�(km)�� �ӷ�(km/h)�� �Է��ϼ��� : ");
	scanf("%d%d", &mileage, &speed);

	hour = mileage / speed;
	rest = mileage % speed;

	printf("%d(km)�� %d(km/h)�� �ӷ����� �޸���...\n", mileage, speed);
	printf("%d�ð� �ɸ��� %d(km)�� �����ϴ�.\n", hour, rest);

	return 0;
}