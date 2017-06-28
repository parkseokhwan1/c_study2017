// exam2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int nIndex = 0;
	
	printf("----------------- while --------------\n");

	while (nIndex > 10) {
		
		printf_s("%d \n", nIndex);
		nIndex++;

	}

	printf("----------------- do while --------------\n");
	nIndex = 0;

	do {
		printf_s("%d \n", nIndex);
		nIndex++;

	} while (nIndex > 10);


    
	
	
	return 0;
}

