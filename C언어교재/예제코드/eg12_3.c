// 353p. 예제12-3 : 소설 이어서 쓰기 프로그램 

#include <stdio.h>
#include <string.h>

int main()
{
	char novel[800]={0};
	char str_in[80];

	while(1){
		printf("문자열을 입력하세요 : ");
		gets(str_in);
		if(strcmp(str_in, "끝")==0) break;

		strcat(novel, str_in);
		strcat(novel, " ");
		printf("현재까지의 줄거리 : ");
		puts(novel);
		puts("\n");
	}
	return 0;
}
