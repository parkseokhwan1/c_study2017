// bubble_sort.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int temp = 0;
	int ary[] = { 3,2,1,5,4,8,6,7 };
	int k = sizeof(ary) / sizeof(ary[0]);

	printf("ó�� �迭�� ����� �� : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", ary[i]);
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k-1; j++) {
			if (ary[j] > ary[j+1]) {
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}

	printf("\n�ٲ� �迭�� ����� �� : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", ary[i]);
		if (i == k - 1) {
			printf("\n");
		}
	}
    return 0;
}

