// 525p. ����18-1 : �Է°� ������� ����� �� ���� ������ �����ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	FILE *ifp, *ofp;

	ifp=fopen("a.txt", "r");
	if(ifp==NULL){
		printf("�Է������� ������� �ʾҽ��ϴ�.\n");
		return 1;
	}
	printf("�Է������� ����Ǿ����ϴ�.\n");

	ofp=fopen("b.txt", "w");
	if(ofp==NULL){
		printf("��������� ������� �ʾҽ��ϴ�.\n");
		return 1;
	}
	printf("��������� ����Ǿ����ϴ�.\n");
	return 0;
}
