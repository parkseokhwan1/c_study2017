#include <stdio.h>

int main()
{
	double nums[5];
	double max;
	int i;

	printf("다섯 개의 숫자를 입력하세요 : ");
	for(i=0; i<5; i++){
		scanf("%lf", &nums[i]);
	}

	max=nums[0];

	for(i=1; i<5; i++){
		if(max<nums[i]) max=nums[i];
	}

	printf("가장 큰 값은 : %lf입니다.\n", max);
	return 0;
}