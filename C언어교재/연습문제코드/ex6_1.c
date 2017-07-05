#include <stdio.h>

int main()
{
	int val;

	printf("정수값을 입력하세요 : ");
	scanf("%d", &val);
	if(val<0) val = -val;
	printf("절대값은 %d입니다.\n", val);
	return 0;
}