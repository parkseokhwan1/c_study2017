// exam11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

//void getAvg(int pBuf[], int *result)
void getAvg(int *pBuf, int *result) {
	
	int nSum = 0;
	for (int i = 0; i < 5; i++) {
		nSum += pBuf[i];
	}
	//pBuf = result;

	*result = nSum / 5;

}

int main()
{
	int buf[5] = { 3,5,6,7,8 };

	int nAvg;

	getAvg(buf, &nAvg);
	printf("%d \n", nAvg);

    return 0;
}

