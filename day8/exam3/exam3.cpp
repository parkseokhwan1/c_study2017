// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	char szInputBuf[] = "23,45,67,100,45";
	char szTemp[16]; //��ū ���� ����
	int nTempIndex = 0;

	//,�������� �����
	int nSum = 0;
	for (int i = 0; i < sizeof(szInputBuf) / sizeof(char); i++) {
		if (szInputBuf[i] == ',' || szInputBuf[i] == '\0') {           //�Ǵ� NULL, i == sizeof(szInputBuf) / sizeof(char)-1  
			//break;
			szTemp[nTempIndex] = NULL;
			printf("%s \n", szTemp);
			int nNum = atoi(szTemp);
			nSum += nNum;
			nTempIndex = 0;


		}
		else {
			szTemp[nTempIndex++] = szInputBuf[i];

		}
	}
	printf("sum %d \n", nSum);
    return 0;
}

