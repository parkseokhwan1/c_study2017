// 558p. ����19-2 : ���� ���� ��ũ�θ��� ����� ���α׷� 

#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("������ ������ϴ�!\n")

int main()
{
	double radius, area;

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &radius);
	area=PI*radius*radius;
	if(area>LIMIT){
		ERR_PRN;
	}
	else{
		printf("���� ���� : %.2lf (%s)\n", area, MSG);
	}
	return 0;
}

