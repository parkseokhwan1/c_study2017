#include <stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%c", &number);
	printf("Ÿ���� �Է��ϼ��� : ");
	scanf("%lf", &batting_avg);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	printf("%c�� ������ Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", 
		number, batting_avg, age);
	return 0;
}