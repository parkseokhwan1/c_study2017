// 182p. 예제6-3 : if~else if~else 구문을 사용한 학점 계산 프로그램 

#include <stdio.h>

int main()
{
	double avg;
	char grade;

	printf("평균점수를 입력하세요 : ");
	scanf("%lf", &avg);

	if(avg>=90.0)
		grade='A'; 
	else if(avg>=80.0)
		grade='B';
	else if(avg>=70.0)
		grade='C';
	else 
		grade='F';

	printf("학점은 %c입니다.\n", grade);
	return 0;
}
