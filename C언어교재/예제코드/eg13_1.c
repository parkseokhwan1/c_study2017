// 370p. 예제13-1 : 함수 내에서 변수의 생성과 소멸 

#include <stdio.h>

int main()
{
	int a=10, b=20;

	printf("바꾸기 전 a : %d, b: %d\n", a, b);

	{
		int temp;

		temp=a;
		a=b;
		b=temp;
	}

	printf("바꾼 후 a : %d, b : %d\n", a, b);
	return 0;
}
