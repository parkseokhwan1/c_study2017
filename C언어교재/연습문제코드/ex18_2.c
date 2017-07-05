#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	int num;
	char name[20];
	int age;
	double height;
	char addr[80];

	fp=fopen("data.txt", "w");
	if(fp==NULL){
		printf("���� ���� ����.\n");
		return 1;
	}

	while(1){
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &num);
		if(num<0) break;

		fflush(stdin);
		printf("�̸��� �Է��ϼ��� : ");
		fgets(name, sizeof(name), stdin);
		name[strlen(name)-1]='\0';

		printf("���̸� �Է��ϼ��� : ");
		scanf("%d", &age);
		printf("Ű�� �Է��ϼ��� : ");
		scanf("%lf", &height);

		fflush(stdin);
		printf("�ּҸ� �Է��ϼ��� : ");
		fgets(addr, sizeof(addr), stdin);
		addr[strlen(addr)-1]='\0';

		fprintf(fp, "%s\n", name);
		fprintf(fp, "%d %.1lf\n", age, height);
		fprintf(fp, "%s\n", addr);
	}

	fclose(fp);
	return 0;
}