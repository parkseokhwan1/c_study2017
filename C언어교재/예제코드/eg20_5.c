// 590p. 예제20-5 : 조건연산자를 사용하여 작은 값을 구하는 프로그램 

#include <stdio.h>

int main()
{
	int a, b;
	int min;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);

	min = (a<b) ? a : b;
	printf("작은 수는 : %d입니다.\n", min);
	return 0;
}
