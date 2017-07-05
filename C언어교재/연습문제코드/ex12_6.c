#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];
	char tel[20];
	char address[50];
	char str[80]={0};

	printf("이름을 입력하세요 : ");
	gets(name);
	strcat(str, name);
	strcat(str, ", ");

	printf("전화번호를 입력하세요 : ");
	gets(tel);
	strcat(str, tel);
	strcat(str, ", ");

	printf("주소를 입력하세요 : ");
	gets(address);
	strcat(str, address);

	puts(str);
	return 0;
}