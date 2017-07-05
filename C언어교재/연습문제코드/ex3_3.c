#include <stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;
	char name[80], position[80];

	printf("등번호를 입력하세요 : ");
	scanf("%c", &number);
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("포지션을 입력하세요 : ");
	scanf("%s", position);
	printf("타율을 입력하세요 : ");
	scanf("%lf", &batting_avg);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);


	printf("%c번-%s-%s, 타율은 %lf이고 나이는 %d살입니다.\n", 
		number, name, position, batting_avg, age);
	return 0;
}