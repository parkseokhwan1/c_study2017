// exam1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ages[5];
	int max = 0;

	//int avg;
	
	//ages[2] = 20;

	for (int i = 0; i < 5; i++) {
		printf("%d��° �����͸� �Է��ϼ���. : ", i);
		scanf("%d", &ages[i]);
	}

	//avg = ages[0] + ages[1] + ages[2] + ages[3] + ages[4];
	/*for (int i = 0; i < 5; i++) {
		avg += ages[i];
	}
	avg /= 5;

	printf("%d /n", avg);*/

	for (int i = 0; i < 5; i++) {
		if (max < ages[i]) {
			max = ages[i];
		}
	
	}

	int min = ages[0];
	for (int i = 0; i < 4; i++) {
		if (min > ages[i+1]) {
			min = ages[i+1];
		}

	}


	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� : %d \n", min);

    return 0;
}

