// 428p. ����15-1 : �Լ��� ����Ͽ� �����ͺ����� ���� �ٲٴ� ���α׷� 

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
