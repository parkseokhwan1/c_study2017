// 474, 476, 478p. ����16-5 : ���ڿ��� �Է��Ͽ� �����ϴ� ���α׷� 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str_prn(char **);

int main(int argc, char **argv)
{
	char temp[80];
	char **str;
	int max;
	int i;

	max=atoi(argv[1]);
	str=(char **)malloc((max+1) * sizeof(char *));
	i=0;
	while(1){
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if(temp[0]=='\0') break;

		str[i]=(char *)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
		i++;
		if(i==max){
			printf("���ڿ� �Է��� �ִ밪�� ��� ä�����ϴ�.\n");
			break;
		}
	}
	str[i]=0;
	str_prn(str);
	i=0;
	while(str[i]!=0){
		free(str[i]);
		i++;
	}
	free(str);
	return 0;
}

void str_prn(char **sp)
{
	while(*sp != 0){
		printf("%s\n", *sp);
		sp++;
	}
}
