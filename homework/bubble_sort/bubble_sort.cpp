// bubble_sort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int temp = 0;
	int ary[] = { 3,2,1,5,4,8,6,7 };
	int k = sizeof(ary) / sizeof(ary[0]);

	printf("처음 배열에 저장된 값 : ");
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

	printf("\n바뀐 배열에 저장된 값 : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", ary[i]);
		if (i == k - 1) {
			printf("\n");
		}
	}
    return 0;
}

