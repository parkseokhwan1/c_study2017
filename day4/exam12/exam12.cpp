// exam12.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	//char strTemp[5] = "Hani";
	char strTemp[5];
	//strTemp = "Hani";
	strTemp[0] = 'H';
	strTemp[1] = 'a';
	strTemp[2] = 'n';
	strTemp[3] = 'i';
	strTemp[4] = '\0'; // �Ǵ� 0x00

	printf("%s", strTemp);

	char szBuf[256];
	printf("����� �̸��� �����Դϱ�?");
	scanf_s("%s", szBuf, 256);

	printf("�ȳ��ϼ��� %s �� \n", szBuf);

    return 0;
}

