#include <stdio.h>

int main()
{
	int dec;

	printf("정수값을 입력하세요 : ");
	scanf("%d", &dec);

	printf("입력된 값은 8진수로 %#o입니다.\n", dec);
	printf("입력된 값은 16진수로 %#x입니다.\n", dec);

	return 0;
}