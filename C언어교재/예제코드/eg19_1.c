// 556p. ����19-1 : ��ũ�λ���� ����� ���α׷� 

#include <stdio.h>
#define PI 3.14159

int main()
{
    double radius;    

	printf("���� �������� �Է��ϼ��� : ");
	scanf("%lf", &radius);
    
    printf("���� �ѷ� : %lf\n", 2*PI*radius);
    printf("���� ���� : %lf\n", PI*radius*radius);
    return 0;
}
