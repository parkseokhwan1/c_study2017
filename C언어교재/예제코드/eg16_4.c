// 472p. 예제16-4 : 명령행 전달인자를 출력하는 프로그램 

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	for(i=0; i<argc; i++){
		printf("%s\n", argv[i]);
	}
	return 0;
}
