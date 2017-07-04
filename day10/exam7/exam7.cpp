// exam7.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	/*char szBuf[64];
	gets_s(szBuf, 64);
	puts(szBuf);

	char c;
	c = getchar();
	putchar(c);*/

	char szTemp[64] = "apple[seed]tree";
	
	// (1) szTemp -> appletree
	/*char *pTemp = szTemp + 5;
	char *pTemp2 = szTemp + 11;
	for (int i = 0; i < 5; i++) {
		*pTemp = *pTemp2;
		pTemp++;
		pTemp2++;
	}
	printf("%s \n", szTemp);*/

	// (2) szTemp -> appletree
	/*strcpy(szTemp + 5, szTemp + 11);
	printf("%s \n", szTemp);*/

	// (3) szTemp -> appletree
	szTemp[5] = NULL;				// szTemp[5]에 '\0'을 넣어 문자열 끝마침
	strcat(szTemp, szTemp + 11);
	printf("%s \n", szTemp);

	

    return 0;
}

