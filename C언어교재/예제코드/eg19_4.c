// 562p. ����19-4 : ��ó�� ��ɾ ����Ͽ� ���Ǻη� �������ϴ� ���α׷� 

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
