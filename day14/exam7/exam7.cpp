// exam7.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

struct Score {
	int kor, eng, mat;
};

int main()
{
	Score a = { 80,90,70 };
	Score *pTemp;

	pTemp = &a;

	printf("%d, %d, %d \n", (*pTemp).kor, (*pTemp).eng, (*pTemp).mat);
	printf("%d, %d, %d \n", pTemp->kor, pTemp->eng, pTemp->mat);

    return 0;
}

