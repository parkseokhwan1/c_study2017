#include <stdio.h>
#include <string.h>

int main()
{
	char season[80];

	printf("�������� �Է��ϼ��� : ");
	scanf("%s", season);

	if(strcmp(season, "��")==0)
		printf("������\n");
	else if(strcmp(season, "����")==0)
		printf("���\n");
	else if(strcmp(season, "����")==0)
		printf("��ȭ\n");
	else if(strcmp(season, "�ܿ�")==0)
		printf("��ȭ\n");
	else 
		printf("�������� �߸� �Է��Ͽ����ϴ�.\n");

	return 0;
}