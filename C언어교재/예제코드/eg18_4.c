// 532p. ����18-4 : Ű����� �ԷµǴ� �����͸� ���Ϸ� ����ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;

	fp=fopen("b.txt", "w");
	if(fp==NULL){
		printf("���� ���� ����.\n");
		return 1;
	}
	printf("�����͸� �Է��ϼ���.\n");
	while(1){
		ch=getchar();
		if(ch==EOF) break;
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
