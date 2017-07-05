// 528p. 예제18-2 : 파일로부터 하나의 문자를 입력 받는 프로그램 

#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("a.txt", "r");
	if(fp==NULL){
		printf("파일 개방 실패.\n");
		return 1;
	}
	ch=fgetc(fp);
	printf("입력한 문자 : %c\n", ch);
	fclose(fp);
	return 0;
}
