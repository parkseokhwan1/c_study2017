// 182p. ����6-3 : if~else if~else ������ ����� ���� ��� ���α׷� 

#include <stdio.h>

int main()
{
	double avg;
	char grade;

	printf("��������� �Է��ϼ��� : ");
	scanf("%lf", &avg);

	if(avg>=90.0)
		grade='A'; 
	else if(avg>=80.0)
		grade='B';
	else if(avg>=70.0)
		grade='C';
	else 
		grade='F';

	printf("������ %c�Դϴ�.\n", grade);
	return 0;
}
