// exam4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 2,8,15,1,8,5,19,19,3,5,6,6,2,8,2,12 };
	int count[20] = { 0 };

	/*count[0] = 1;
	count[1] = 3;*/

	for (int i = 0; i < 20 ; i++) {
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++) {
			if (ary[j] == i + 1) {

				count[i+1]++;
			}
			
		}
		printf("%d - %d개 \n", i , count[i]);

	}

    return 0;
}

