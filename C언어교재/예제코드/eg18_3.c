// 531p. ����18-3 : �ؽ�Ʈ ������ ������ ȭ�鿡 ����ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("a.txt", "r");
	if(fp==NULL){
		printf("���� ���� ����.\n");
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
