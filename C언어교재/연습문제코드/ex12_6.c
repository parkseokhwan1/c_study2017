#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];
	char tel[20];
	char address[50];
	char str[80]={0};

	printf("�̸��� �Է��ϼ��� : ");
	gets(name);
	strcat(str, name);
	strcat(str, ", ");

	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(tel);
	strcat(str, tel);
	strcat(str, ", ");

	printf("�ּҸ� �Է��ϼ��� : ");
	gets(address);
	strcat(str, address);

	puts(str);
	return 0;
}