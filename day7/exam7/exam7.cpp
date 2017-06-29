// exam7.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

void dumpBuf(int nBuf[])
{
	for (int i = 0; i < 16; i++) {
		printf("%d", nBuf[i]);
	}

	printf("\n");
}


int main()
{

	int nBuf[16] = {};

	bool bLoop = true;
	while (bLoop) {

		int nIndex, nValue;
		printf("삽입할 위치와 값을 입력하세요 (나가시려면 15이상 입력하세요): ");
		scanf("%d %d", &nIndex, &nValue);

		if (nIndex > 15) bLoop = false;

		//nBuf[nIndex + 1] = nBuf[nIndex];

		for (int i = 15; i > nIndex; i--) {
			nBuf[i] = nBuf[i - 1];
		}

		nBuf[nIndex] = nValue;


		dumpBuf(nBuf);

	}

    return 0;
}

