// exam4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	
	printf("1부터 100까지의 홀수의 합은 : %d \n", j);
    return 0;
}

