#include <stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("등번호를 입력하세요 : ");
	scanf("%c", &number);
	printf("타율을 입력하세요 : ");
	scanf("%lf", &batting_avg);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("%c번 선수의 타율은 %lf이고 나이는 %d살입니다.\n", 
		number, batting_avg, age);
	return 0;
}