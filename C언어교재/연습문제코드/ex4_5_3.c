#include <stdio.h>

int main()
{
	double mileage, speed, time;
	int hour, min;

	printf("�Ÿ��� �ӷ��� �Է��ϼ��� : ");
	scanf("%lf%lf", &mileage, &speed);

	time = mileage / speed;     
	hour = (int)time;           
	time = time - hour;        

	time = time * 60;           
	min = (int)time;            
	time = time - min;          

	time = time * 60;           

	printf("�ɸ��� �ð��� : %d�ð�, %d��, %.8f���Դϴ�.\n", hour, min, time);

	return 0;
}