#include <stdio.h>

int main()
{
	int year;

	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);

	if(year%4!=0) printf("����Դϴ�.\n");
	else if(year%100!=0) printf("�����Դϴ�.\n");
	else if(year%400==0) printf("�����Դϴ�.\n");
	else printf("����Դϴ�.\n");

	return 0;
}