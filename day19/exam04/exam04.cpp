// exam04.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <comdef.h>
int main()
{
	// wchar -> char
	TCHAR *strMsgW = L"�ȳ��ϼ���";

	_bstr_t convObj(strMsgW);

	char *strMsgW_cnv = (char *)convObj;

	printf("%s \n", strMsgW_cnv);

	// char -> wchar
	char *strMsgC = "�ݰ����ϴ�.";
	TCHAR szBufW[256];

	mbstowcs(szBufW, strMsgC, 256);

	wprintf(L"%s \n", szBufW);

    return 0;
}

