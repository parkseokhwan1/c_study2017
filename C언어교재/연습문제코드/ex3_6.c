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

	printf("1���� %d��, %d�ð�, %d��, %d���Դϴ�.\n", day, hour, min, sec);

	return 0;
}