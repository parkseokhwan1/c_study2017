// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	char *pTest = "123456789";
	char Test2[64] = "123456789";

	printf("%u , %u \n", pTest, Test2);

	Test2[2] = '*';

	printf("%s \n", Test2);

    return 0;
}

