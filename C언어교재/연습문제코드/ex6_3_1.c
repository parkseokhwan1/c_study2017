#include <stdio.h>

int main()
{
	char sex;

	printf("문자를 입력하세요 : ");
	scanf("%c", &sex);

	if(sex=='m')
		printf("남자입니다.\n");
	else if(sex=='f')
		printf("여자입니다.\n");
	else
		printf("잘못 입력하였습니다.\n");

	return 0;
}