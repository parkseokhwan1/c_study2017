// exam9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int i = 0;

	while (true) {
		i++;
		if (i > 10) {
			break;
		}
		printf_s("count : %d \n", i);
	}
	printf_s("--------------------------------- \n");
	i = 0;
	while (true) {
		i++;
		if (i > 10) {
			break;
		}
		if (i % 2) {
			continue;
		}
		printf_s("count : %d \n", i);
	}
    return 0;
}

