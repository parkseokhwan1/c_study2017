// exam1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ages[5];
	int max = 0;

	//int avg;
	
	//ages[2] = 20;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 데이터를 입력하세요. : ", i);
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


	printf("최대값 : %d \n", max);
	printf("최소값 : %d \n", min);

    return 0;
}

