#include <stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &weight);
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);

	bmi = weight / (height * height);

	printf("����� BMI�� : %.1lf�Դϴ�.\n", bmi);

	return 0;
}