// exam11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int num, age;
	float hit;
	printf("���ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("Ÿ���� �Է��ϼ���: ");
	scanf_s("%f", &hit);
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);

	printf("%d�� ������ Ÿ���� %f�̰� ���̴� %d���Դϴ�. \n", num, hit, age);
    return 0;
}

