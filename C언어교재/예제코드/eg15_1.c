// 428p. 예제15-1 : 함수를 사용하여 포인터변수의 값을 바꾸는 프로그램 

#include <stdio.h>

void exchange_ptr(char **, char **);

int main()
{
	char *ap="success";
	char *bp="failure";

	printf("ap -> %s, bp -> %s\n", ap, bp);
	exchange_ptr(&ap, &bp);
	printf("ap -> %s, bp -> %s\n", ap, bp);
	return 0;
}

void exchange_ptr(char **app, char **bpp)
{
	char *tp;

	tp=*app;
	*app=*bpp;
	*bpp=tp;
}
