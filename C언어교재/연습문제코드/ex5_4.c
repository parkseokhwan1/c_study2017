#include <stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);

	bmi = weight / (height * height);

	printf("당신의 BMI는 : %.1lf입니다.\n", bmi);

	return 0;
}