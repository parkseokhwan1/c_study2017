// 536p. ����18-5 : ǥ�� ����� ��Ʈ���� ����ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	char ch;

	while(1){
		ch=fgetc(stdin);
		if(ch==EOF) break;
		fputc(ch, stdout);
	}
	return 0;
}
