#include <stdio.h>
#include <stdlib.h>

struct profile{
	int age;
	double height;
	char *np;
};

struct student{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;

	printf("나이를 입력하세요 : ");
	scanf("%d", &s1.pf.age);
	printf("키를 입력하세요 : ");
	scanf("%lf", &s1.pf.height);
	s1.pf.np=(char *)malloc(20);
	printf("이름을 입력하세요 : ");
	scanf("%s", s1.pf.np);

	s1.num=5;
	s1.grade=4.4;

	printf("이름 : %s\n", s1.pf.np);
	printf("나이 : %d\n", s1.pf.age);
	printf(" 키  : %.1lf\n", s1.pf.height);
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	return 0;
}