#include <stdio.h>

int main()
{
	int mileage, speed;
	int hour, rest;

	printf("거리(km)와 속력(km/h)을 입력하세요 : ");
	scanf("%d%d", &mileage, &speed);

	hour = mileage / speed;
	rest = mileage % speed;

	printf("%d(km)를 %d(km/h)의 속력으로 달리면...\n", mileage, speed);
	printf("%d시간 걸리고 %d(km)가 남습니다.\n", hour, rest);

	return 0;
}