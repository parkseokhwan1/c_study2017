// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int i = 1;
	int j = 1;

	while (i < 99) {

		i = i + 2;
		j = j + i;
	};
	
	printf("1���� 100������ Ȧ���� ���� : %d \n", j);
    return 0;
}

