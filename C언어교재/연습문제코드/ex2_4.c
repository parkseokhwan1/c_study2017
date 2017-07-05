#include <stdio.h>

int main()
{
	int num1, num2, res; 

	printf(“두 정수값을 입력하세요 : ”);  
	scanf(“%d%d”, &num1, &num2); 

	res = num1 + num2;  

	printf(“두 정수의 합은 %d입니다”, res);  
	return 0;
}