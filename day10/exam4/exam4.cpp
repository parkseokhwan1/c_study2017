// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string.h>


int main()
{
	//���ڿ�����
	char *pTest = "apple";
	char szBuf[64];

	strcpy(szBuf, pTest);		//pTest ���ڿ��� szBuf�迭�� ����
	printf("%s \n", szBuf);

	strcpy(szBuf, pTest + 1);
	printf("%s \n", szBuf);

	//�����ڵ� ���ڿ�����
	TCHAR *pwTest = L"�Դٹ������";
	TCHAR szwBuf[64];
	
	wcscpy(szwBuf, pwTest);
	wcscpy(szwBuf, pwTest+4);

	//���ڿ� ũ�� ���ϱ�
	printf("%d \n", strlen(pTest));
	printf("%d \n", wcslen((TCHAR *)pwTest));
	
	

    return 0;
}

