#include <stdio.h>

int main()
{
	double f, c;  // fahrenheit, celsius

	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &f);

	c = (5/9.0)*(f-32);

	printf("���� �µ��� %.1lf���Դϴ�.\n", c);

	return 0;
}