#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *high, *low;

	high=(double *)malloc(sizeof(double));
	low=(double *)malloc(sizeof(double));

	if(high==0 || low==0){
		printf("동적할당할 메모리가 부족합니다.\n");
		return 0;
	}

	printf("최고기온과 최저기온을 입력하세요 : ");
	scanf("%lf%lf", high, low);

	printf("일교차는 %.1lf도 입니다.\n", *high - *low);
	free(high);
	free(low);
	return 0;
}