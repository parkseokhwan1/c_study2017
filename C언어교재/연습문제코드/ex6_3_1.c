#include <stdio.h>

int main()
{
	char sex;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &sex);

	if(sex=='m')
		printf("�����Դϴ�.\n");
	else if(sex=='f')
		printf("�����Դϴ�.\n");
	else
		printf("�߸� �Է��Ͽ����ϴ�.\n");

	return 0;
}