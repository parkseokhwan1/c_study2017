// 515p. ����17-8 : typedef�� ����Ͽ� �ڷ����� �������ϴ� ���α׷� 

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
	printf("�й� : %d\n", sp->num);
	printf("���� : %.1lf\n", sp->grade);
}

