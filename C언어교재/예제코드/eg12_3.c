// 353p. ����12-3 : �Ҽ� �̾ ���� ���α׷� 

#include <stdio.h>
#include <string.h>

int main()
{
	char novel[800]={0};
	char str_in[80];

	while(1){
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(str_in);
		if(strcmp(str_in, "��")==0) break;

		strcat(novel, str_in);
		strcat(novel, " ");
		printf("��������� �ٰŸ� : ");
		puts(novel);
		puts("\n");
	}
	return 0;
}
