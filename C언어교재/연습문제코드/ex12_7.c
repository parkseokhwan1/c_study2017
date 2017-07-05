#include <stdio.h>

int main()
{
	char str[80];
	int ch;
	int i;

	while(1){
		printf("문자열을 입력하세요(종료는 엔터) : ");
		ch=getchar();
		if(ch=='\n') break;
		str[0]=ch;
		i=1;
		while(1){
			ch=getchar();
			if(ch=='\n') break;
			str[i]=ch;
			i++;
		}
		str[i]='\0';
		printf("입력된 문자열 : %s\n", str);
	}
	return 0;
}