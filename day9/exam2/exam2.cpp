// exam2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double *ap = ary;
	//ap = ary;
	double sum = 0;
	
	for (int i = 0; i < 5; i++) {
		//sum += *(ary + i);
		sum += *(ap + i);
		// sum += ary[i];
		// sum += *(&ary[0]+i);
	}

	printf("��հ� : %.2f\n", sum/5);

    return 0;
}

