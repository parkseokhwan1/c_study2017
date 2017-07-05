// 582p. 예제20-1 : 비트별 논리곱 연산자를 사용한 프로그램 

#include <stdio.h>

int main()
{
	char a='a', b='b';
	char m=(char)0xdf;
	char n=1;

	printf("a & m : %c\n", a & m); 
	printf("b의 첫번째 비트 : %d\n", b&n);   
	return 0;
}
