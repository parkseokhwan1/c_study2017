// 207p. 예제7-1 : 증감연산자의 사용법 

#include <stdio.h>

int main()
{
	int a=0, b=0;

	++a; 
	b++;
	printf("a=%d, b=%d\n", a, b);         
	b=a++;
	printf("a=%d, b=%d\n", a, b);         
	b=++a;
	printf("a=%d, b=%d\n", a, b);         
	printf("a=%d, b=%d\n", a++, b++);     
	printf("a=%d, b=%d\n", a, b);         
	return 0;
}
