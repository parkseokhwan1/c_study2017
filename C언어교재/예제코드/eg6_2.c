// 178p. ����6-2 : if~else������ ����� �񸸵� �˻� ���α׷� 

#include <stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf("%lf", &height);

	height = height / 100;    
	bmi = weight / (height * height);
	printf("����� BMI�� : %.1lf�Դϴ�.\n", bmi);

	if(bmi>=20.0 && bmi<25.0) 
		printf("ǥ��ü�� �Դϴ�.\n");
	else 
		printf("ü�߰����� �ʿ��մϴ�.\n");
	return 0;
}
