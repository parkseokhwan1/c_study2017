// 546p. ����18-8 : ���۸� ��������ν� �߻��ϴ� ���� 

#include <stdio.h>

int main()
{
	int num;
	char name[20];

	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("�̸��� �Է��ϼ��� : ");
	fgets(name, sizeof(name), stdin);

	printf("�й� : %d\n", num);
	printf("�̸� : %s\n", name);
	return 0;
}
