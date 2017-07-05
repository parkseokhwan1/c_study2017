// 386p. 예제13-6 : 외부 변수를 사용하여 두 값을 바꾸는 프로그램 

#include <stdio.h>

void exchange();

int a, b;

int main()
{
	printf("정수값 두 개를 입력하세요 : ");
	scanf("%d%d", &a, &b);
	exchange();
	printf("a : %d, b: %d\n", a, b);
	return 0;
}

void exchange()
{
	int temp;

	temp=a;
	a=b;
	b=temp;
}
