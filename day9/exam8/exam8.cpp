// exam8.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	char *strItems = "pike,plate amor,lather grove,sword,dager";
	
	int nIndexTable[32];

	//�ε��� ���̺� ����
	int nCount = 0;
	for (int i = 0; strItems[i] != 0x00; i++) {
		if (strItems[i] == ',') {
			nIndexTable[nCount++] = i;
		}
	}

	/*for (int i = 0; i < sizeof(strItems) / sizeof(strItems[0]); i++) {
		if (strItems[i] != ',') {
			nIndexTable[i] = strItems[i];
		}
	}*/

	int nIndex = 0;
	printf("select index : ");
	scanf("%d", &nIndex);
		
	//printf("%s \n", &(strItems[nIndexTable[nIndex]]));
	char *pTemp = &(strItems[nIndexTable[nIndex]]);
	for (int i = 0; i < nIndexTable[nIndex + 1] - nIndexTable[nIndex]; i++) {
		printf("%c", pTemp[i]);
	}

    return 0;
}

