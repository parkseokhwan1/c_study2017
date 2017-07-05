#include <stdio.h>

int main()
{
	double inch, centi;

	printf("센티미터 길이를 입력하세요 : ");
	scanf("%lf", &centi);

	inch = centi * (1 / 2.54);

	printf("인치로 계산하면 %.1lf인치입니다.\n", inch);

	return 0;
}