// 188p. ����6-4 : switch~case ������ ����� ��÷ ���α׷� 

#include <stdio.h>

int main()
{
	int lot;

	printf("��÷ ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &lot);

	switch(lot){
	case 1: 
		printf("�輭��");
		break;
	case 2: 
		printf("ȫ����");
		break;
	case 3:
		printf("�Ȼ��");
		break;
	default:
		printf("��÷�ڰ� �����ϴ�!");
		break;
	}
	return 0;
}
