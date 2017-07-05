// 536p. 예제18-5 : 표준 입출력 스트림을 사용하는 프로그램 

#include <stdio.h>

int main()
{
	char ch;

	while(1){
		ch=fgetc(stdin);
		if(ch==EOF) break;
		fputc(ch, stdout);
	}
	return 0;
}
