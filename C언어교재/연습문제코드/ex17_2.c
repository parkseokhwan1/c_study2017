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

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &s1.pf.age);
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%lf", &s1.pf.height);
	s1.pf.np=(char *)malloc(20);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", s1.pf.np);

	s1.num=5;
	s1.grade=4.4;

	printf("�̸� : %s\n", s1.pf.np);
	printf("���� : %d\n", s1.pf.age);
	printf(" Ű  : %.1lf\n", s1.pf.height);
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	return 0;
}