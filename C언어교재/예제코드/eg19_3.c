// 560p. ����19-3 : ��ũ���Լ��� Ȱ���� ���α׷� 

#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x)*(x))

int main()
{
	double radius;

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &radius);
	printf("���� ������ : %.2lf", PI*SQUARE(radius));
	return 0;
}

