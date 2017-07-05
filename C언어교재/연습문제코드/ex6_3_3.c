#include <stdio.h>

int main()
{
	char sex;
	double weight, height;
	double bmi;

	printf("성별을 입력하세요(m/f) : ");
	scanf("%c", &sex);
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &weight);
	printf("키를 입력하세요(cm) : ");
	scanf("%lf", &height);

	height = height / 100;    
	bmi = weight / (height * height);
	printf("당신의 BMI는 : %.1lf입니다.\n", bmi);

	if(bmi>=20.0 && bmi<25.0)         // 남녀 공통 표준체중
		printf("표준체중입니다.\n");
	else if(bmi>=25.0)                // 남녀 공통 과체중
		printf("과체중입니다.\n");
	else if(bmi<18.5)                 // 남녀 공통 저체중
		printf("저체중입니다.\n");
	else if(sex=='f')                 // 18.5<=bmi<20.0인 경우는 남녀에 따라 구분
		printf("표준체중입니다.\n");  // 여자이면 표준체중이지만
	else 
		printf("저체중입니다.\n");    // 남자에겐 저체중입니다.

	return 0;
}