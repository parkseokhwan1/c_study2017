// 333p. 예제12-1 : 문자열이 포인터임을 증명하자!

#include <stdio.h>

int main()
{
	printf("주소값을 출력 : %u\n", "dream");
	printf("첫번째 문자를 출력 : %c\n", *"dream");
	printf("세번째 문자를 출력 : %c\n", "dream"[2]);
	return 0;
}
