#include <stdio.h>

int main()
{
	int year, day, hour, min;
	unsigned int sec;

	printf("�� ����� ��� �ͽ��ϱ�? ");
	scanf("%d", &year);

	day = year * 365;
	hour = day * 24;
	min = hour * 60;
	sec = min * 60;

	printf("%d��, %d�ð�, %d��, %u���Դϴ�.\n", day, hour, min, sec);

	return 0;
}