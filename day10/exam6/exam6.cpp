// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char szBuf[32] = "disco";

	strcat(szBuf, "very");
	printf("%s \n", szBuf);
	strcat(szBuf, "-channel");
	printf("%s \n", szBuf);

	TCHAR wszBuf[32] = L"����";

	wcscat(wszBuf, L"����");
	wcscat(wszBuf, L"ä��");


    return 0;
}

