// 528p. ����18-2 : ���Ϸκ��� �ϳ��� ���ڸ� �Է� �޴� ���α׷� 

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
	ch=fgetc(fp);
	printf("�Է��� ���� : %c\n", ch);
	fclose(fp);
	return 0;
}
