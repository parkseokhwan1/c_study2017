// 532p. 예제18-4 : 키보드로 입력되는 데이터를 파일로 출력하는 프로그램 

#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("b.txt", "w");
	if(fp==NULL){
		printf("파일 개방 실패.\n");
		return 1;
	}
	printf("데이터를 입력하세요.\n");
	while(1){
		ch=getchar();
		if(ch==EOF) break;
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
