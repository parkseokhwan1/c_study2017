// 172p. 예제6-1 : 논리연산자의 사용법 

#include <stdio.h>

int main()
{
	int a=10;

	printf("논리곱 연산 : %d\n", (a>5) && (a<=15));
	printf("논리합 연산 : %d\n", (a!=10) || (a==20));
	printf("논리부정 연산 : %d\n", !((a-5)>0));
	printf("피연산자가 상수인 경우 : %d\n", -3.4 && (a>0));
	return 0;
}
