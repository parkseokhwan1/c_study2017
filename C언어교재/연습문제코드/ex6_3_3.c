#include <stdio.h>

int main()
{
	char sex;
	double weight, height;
	double bmi;

	printf("������ �Է��ϼ���(m/f) : ");
	scanf("%c", &sex);
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf("%lf", &height);

	height = height / 100;    
	bmi = weight / (height * height);
	printf("����� BMI�� : %.1lf�Դϴ�.\n", bmi);

	if(bmi>=20.0 && bmi<25.0)         // ���� ���� ǥ��ü��
		printf("ǥ��ü���Դϴ�.\n");
	else if(bmi>=25.0)                // ���� ���� ��ü��
		printf("��ü���Դϴ�.\n");
	else if(bmi<18.5)                 // ���� ���� ��ü��
		printf("��ü���Դϴ�.\n");
	else if(sex=='f')                 // 18.5<=bmi<20.0�� ���� ���࿡ ���� ����
		printf("ǥ��ü���Դϴ�.\n");  // �����̸� ǥ��ü��������
	else 
		printf("��ü���Դϴ�.\n");    // ���ڿ��� ��ü���Դϴ�.

	return 0;
}