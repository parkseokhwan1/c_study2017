// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int nAry1[10] = { 1, 2, 3, 4, 10 };
	int nAry2[5] = { 5,6,7,8,9 };

	//nAry2 -> nAry1

	//...
	//1,2,3,4,6,0
	//1,2,3,4,6,6
	//1,2,3,4,5,6
	//nAry[5] = nAry[4];
	//nAry[4] = 5;
	//5,6,7,8,9

	for (int i = 0; i < 5; i++) {
		int nIns = nAry2[i];
		
		nAry1[4 + (i + 1)] = nAry1[4 + i];
		nAry1[4+i] = nIns;
		
	}
	

    return 0;
}

