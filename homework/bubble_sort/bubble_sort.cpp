// bubble_sort.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int temp = 0;
	int ary[] = { 3,2,1,5,4 };
	int k = sizeof(ary) / sizeof(ary[0]);

	printf("ó�� �迭�� ����� �� : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", ary[i]);
	}

	for (int i = 0; i < k-3; i++) {
		for (int j = 1; j < k-2; j++) {
			if (ary[j] < ary[i]) {
				temp = ary[j];
				ary[j] = ary[i];
				ary[i] = temp;
			}
			i++;
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

