#include <stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;
	char name[80], position[80];

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%c", &number);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	printf("�������� �Է��ϼ��� : ");
	scanf("%s", position);
	printf("Ÿ���� �Է��ϼ��� : ");
	scanf("%lf", &batting_avg);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);


	printf("%c��-%s-%s, Ÿ���� %lf�̰� ���̴� %d���Դϴ�.\n", 
		number, name, position, batting_avg, age);
	return 0;
}