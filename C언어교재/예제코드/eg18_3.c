// 531p. 예제18-3 : 텍스트 파일의 내용을 화면에 출력하는 프로그램 

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
	while(1){
		ch=fgetc(fp);
		if(ch==EOF) break;
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
