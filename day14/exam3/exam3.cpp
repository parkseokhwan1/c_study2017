// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	//int ary[5]={23,24,21,25,31}
	int *ip;
	//malloc(20)
	ip = (int *)malloc(sizeof(int) * 5);

	ip[0] = 23;
	ip[1] = 24;
	ip[2] = 21;
	ip[3] = 25;
	ip[4] = 31;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += ip[i];
	}
	printf("��� : %.1lf \n", sum / 5.0);

	free(ip);		

    return 0;
}

