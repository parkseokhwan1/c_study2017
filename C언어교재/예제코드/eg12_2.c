// 335p. ����12-2 : ���ڿ��� �߰����� ������ ����ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	char *fruit="strawberry";

	while(*fruit != '\0'){
		printf("%s\n", fruit);
		fruit++;
	}
	return 0;
}
