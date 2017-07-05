// 562p. 예제19-4 : 전처리 명령어를 사용하여 조건부로 컴파일하는 프로그램 

#include <stdio.h>
#define TC

#ifdef TC
#include <conio.h>
#define MAX_INT 32767
#else
#define MAX_INT 2147483647
#endif

int main()
{
	int m=MAX_INT;
#ifdef TC
	clrscr();
#endif
	printf("Maximum value => %d\n", m);
#ifdef TC
	getch();
#endif
	return 0;
}
