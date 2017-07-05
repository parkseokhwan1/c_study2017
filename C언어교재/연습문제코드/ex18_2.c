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
		printf("파일 개방 실패.\n");
		return 1;
	}

	while(1){
		printf("학번을 입력하세요 : ");
		scanf("%d", &num);
		if(num<0) break;

		fflush(stdin);
		printf("이름을 입력하세요 : ");
		fgets(name, sizeof(name), stdin);
		name[strlen(name)-1]='\0';

		printf("나이를 입력하세요 : ");
		scanf("%d", &age);
		printf("키를 입력하세요 : ");
		scanf("%lf", &height);

		fflush(stdin);
		printf("주소를 입력하세요 : ");
		fgets(addr, sizeof(addr), stdin);
		addr[strlen(addr)-1]='\0';

		fprintf(fp, "%s\n", name);
		fprintf(fp, "%d %.1lf\n", age, height);
		fprintf(fp, "%s\n", addr);
	}

	fclose(fp);
	return 0;
}