// exam4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>


int main()
{
	//문자열복사
	char *pTest = "apple";
	char szBuf[64];

	strcpy(szBuf, pTest);		//pTest 문자열을 szBuf배열로 복사
	printf("%s \n", szBuf);

	strcpy(szBuf, pTest + 1);
	printf("%s \n", szBuf);

	//유니코드 문자열복사
	TCHAR *pwTest = L"먹다버린사과";
	TCHAR szwBuf[64];
	
	wcscpy(szwBuf, pwTest);
	wcscpy(szwBuf, pwTest+4);

	//문자열 크기 구하기
	printf("%d \n", strlen(pTest));
	printf("%d \n", wcslen((TCHAR *)pwTest));
	
	

    return 0;
}

