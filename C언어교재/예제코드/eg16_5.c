// 474, 476, 478p. 예제16-5 : 문자열을 입력하여 저장하는 프로그램 

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
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if(temp[0]=='\0') break;

		str[i]=(char *)malloc(strlen(temp)+1);
		strcpy(str[i], temp);
		i++;
		if(i==max){
			printf("문자열 입력이 최대값을 모두 채웠습니다.\n");
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
