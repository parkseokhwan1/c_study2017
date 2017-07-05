#include <stdio.h>

int main()
{
	double mileage, speed, time;
	int hour, min;

	printf("거리와 속력을 입력하세요 : ");
	scanf("%lf%lf", &mileage, &speed);

	time = mileage / speed;     
	hour = (int)time;           
	time = time - hour;        

	time = time * 60;           
	min = (int)time;            
	time = time - min;          

	time = time * 60;           

	printf("걸리는 시간은 : %d시간, %d분, %.8f초입니다.\n", hour, min, time);

	return 0;
}