// 515p. 예제17-8 : typedef를 사용하여 자료형을 재정의하는 프로그램 

#include <stdio.h>

typedef struct {
	int num;
	double grade;
} Student;

void data_prn(Student *);

int main()
{
	Student s1={315, 4.2};

	data_prn(&s1);
	return 0;
}

void data_prn(Student *sp)
{
	printf("학번 : %d\n", sp->num);
	printf("학점 : %.1lf\n", sp->grade);
}

