#include <stdio.h>

int main()
{
	int year, day, hour, min;
	unsigned int sec;

	printf("몇 살까지 살고 싶습니까? ");
	scanf("%d", &year);

	day = year * 365;
	hour = day * 24;
	min = hour * 60;
	sec = min * 60;

	printf("%d일, %d시간, %d분, %u초입니다.\n", day, hour, min, sec);

	return 0;
}