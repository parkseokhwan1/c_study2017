// exam5.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void ary_input(int *ap) {
	ap[0] = 10;
	*(ap + 1) = 20;

}


int main()
{
	int ary[5];
	
	ary_input(ary);

	printf("%d %d \n", ary[0], ary[1]);

	int ary2[5] = { 10,20,30,40,50 };
	int *ap = ary2 + 2;
	//printf("%d %d\n", *(ap + 1), *(ap + 2));
	printf("%d %d\n", ap[1], ap[2]);
	printf("%d %d\n", ary2[1], ary2[2]);


    return 0;
}

