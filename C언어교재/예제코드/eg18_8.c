// 546p. 예제18-8 : 버퍼를 사용함으로써 발생하는 문제 

#include <stdio.h>

int main()
{
	int num;
	char name[20];

	printf("학번을 입력하세요 : ");
	scanf("%d", &num);
	printf("이름을 입력하세요 : ");
	fgets(name, sizeof(name), stdin);

	printf("학번 : %d\n", num);
	printf("이름 : %s\n", name);
	return 0;
}
