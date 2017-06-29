// exam8.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void dumpBuf(int nBuf[], int nSize)
{
	for (int i = 0; i < 8; i++) {
		printf("%d", nBuf[i]);
	}

	printf("\n");
}

int main()
{
	int nBuf[] = {1,2,3,4,5,6,7,8};
	int nBufSize = sizeof(nBuf) / sizeof(nBuf[0]);

	dumpBuf(nBuf, nBufSize);

	bool bLoop = true;
	while (bLoop) {

		int nIndex;
		printf("������ ��ġ�� �Է��ϼ��� (�����÷��� 8�̻� �Է��ϼ���): ");
		scanf("%d", &nIndex);

		if (nIndex >= nBufSize- 1) bLoop = false;

		for (int i = nIndex; i < nBufSize - 1; i++) {
			nBuf[i] = nBuf[i + 1];
		}


		dumpBuf(nBuf, nBufSize);

	}

    return 0;
}

