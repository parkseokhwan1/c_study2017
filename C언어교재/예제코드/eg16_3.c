// 466p. ����16-3 : �� ���� ���ڿ��� �����ϱ� ���� ���� �Ҵ� ���α׷� 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char temp[80];
	char *str[3];
	int i;

	for(i=0; i<3; i++){
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		str[i]=(char *)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
	}

	for(i=0; i<3; i++){
		printf("%s\n", str[i]);
	}

	for(i=0; i<3; i++){
		free(str[i]);
	}
	return 0;
}
