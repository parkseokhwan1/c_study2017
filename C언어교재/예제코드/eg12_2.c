// 335p. 예제12-2 : 문자열의 중간부터 끝까지 출력하는 프로그램 

#include <stdio.h>

int main()
{
	char *fruit="strawberry";

	while(*fruit != '\0'){
		printf("%s\n", fruit);
		fruit++;
	}
	return 0;
}
