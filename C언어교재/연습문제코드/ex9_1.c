#include <stdio.h>

int main()
{
	double nums[5];
	double max;
	int i;

	printf("�ټ� ���� ���ڸ� �Է��ϼ��� : ");
	for(i=0; i<5; i++){
		scanf("%lf", &nums[i]);
	}

	max=nums[0];

	for(i=1; i<5; i++){
		if(max<nums[i]) max=nums[i];
	}

	printf("���� ū ���� : %lf�Դϴ�.\n", max);
	return 0;
}