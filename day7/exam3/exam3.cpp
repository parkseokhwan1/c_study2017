// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 2,8,15,1,8,5,19,19,3,5,6,6,2,8,2,12 };
	int a;

	printf("ã�⸦ ���ϴ� ���ڸ� �Է��ϼ��� (1~20) : ");
	scanf("%d", &a);

	int nCount = 0;
	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		if(ary[i] == a){
			
			nCount++;

		}
	}
	printf("���� %d�� �迭�� %d�� �ֽ��ϴ�. \n", a, nCount);
    return 0;
}

