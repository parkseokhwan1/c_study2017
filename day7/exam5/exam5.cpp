// exam5.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int temp = 0;
	/*int ary[5] = { 1,2,3,4,5 };
	printf("ó�� �迭�� ����� �� : %d %d %d %d %d \n", ary[0], ary[1], ary[2], ary[3], ary[4] );


	for (int a = 0; a < 5; a++) {

		if(a<3){
		temp = ary[a];
		ary[a] = ary[4 - a];
		ary[4 - a] = temp;
		}
	}

	printf("�ٲ� �迭�� ����� �� : %d %d %d %d %d \n", ary[0], ary[1], ary[2], ary[3], ary[4]);
    return 0;*/

	int ary[] = { 7,9,1,3,4,6,8,10,19 };
	//int ary[8];

	int j = sizeof(ary) / sizeof(ary[0]);
	/*for (int i = 0; i < j; i++) {
		printf("%d��° �����͸� �Է��ϼ���. : ", i+1);
		scanf("%d", &ary[i]);
	}*/

	printf("ó�� �迭�� ����� �� : ");
	for (int i = 0; i < j; i++) {
		printf("%d ", ary[i]);
	}

	for (int i = 0; i < j; i++) {
		if (i < j / 2) {
			temp = ary[i];
			ary[i] = ary[j - 1 - i];
			ary[j - 1 - i] = temp;
		}
	}

	printf("\n�ٲ� �迭�� ����� �� : ");
	for (int i = 0; i < j; i++) {
		printf("%d ", ary[i]);
		if (i == j - 1) {
			printf("\n");
		}
	}
	return 0;

}

