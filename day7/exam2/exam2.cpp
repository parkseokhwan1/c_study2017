// exam2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int nums[5] = { 1,3,7};

	printf("%d \n", sizeof(nums));
	
	for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
		printf("%d -> %d , %u \n", i, nums[i], &nums[i]);
	}

    return 0;
}

