#include <stdio.h>

int main()
{
	double annual = 365.2422;
	int day, hour, min, sec;

	day = (int)annual;
	annual = annual - day;
	annual = annual * 24;

	hour = (int)annual;
	annual = annual - hour;
	annual = annual * 60;

	min = (int)annual;
	annual = annual - min;
	annual = annual * 60;

	sec = (int)annual;

	printf("1년은 %d일, %d시간, %d분, %d초입니다.\n", day, hour, min, sec);

	return 0;
}