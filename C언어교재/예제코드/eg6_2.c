// 178p. 예제6-2 : if~else구문을 사용한 비만도 검사 프로그램 

#include <stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);
	printf("키를 입력하세요(cm) : ");
	scanf("%lf", &height);

	height = height / 100;    
	bmi = weight / (height * height);
	printf("당신의 BMI는 : %.1lf입니다.\n", bmi);

	if(bmi>=20.0 && bmi<25.0) 
		printf("표준체중 입니다.\n");
	else 
		printf("체중관리가 필요합니다.\n");
	return 0;
}
