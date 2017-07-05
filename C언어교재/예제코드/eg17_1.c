// 490p. 예제17-1 : 구조체의 형 선언과 멤버를 참조하는 프로그램 

#include <stdio.h>

struct student{
	int num;
	double grade;
};

int main()
{
	struct student s1;

	s1.num=2;
	s1.grade=2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	return 0;
}
