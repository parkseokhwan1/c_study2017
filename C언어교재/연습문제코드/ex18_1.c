#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;
	int cnt=0;

	fp=fopen("a.txt", "r");
	if(fp==NULL){
		printf("파일 개방 실패.\n");
		return 1;
	}

	while(1){
		ch=fgetc(fp);
		if(ch==EOF) break;
		putchar(ch);
		if(ch=='.'){
			putchar('\n');
			cnt++;
			if(cnt%3==0) putchar('\n');
		}
	}
	fclose(fp);
	return 0;
}