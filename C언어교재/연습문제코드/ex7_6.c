#include <stdio.h>

int main()
{
	int weight;
	int eggs=0;

	while(1){
		printf("계란의 무게를 입력하세요(단위 : g) : ");
		scanf("%d", &weight);

		if(weight<300) continue;
		eggs++;
		if(eggs==30) break;
		printf("현재 왕계란의 수 : %d\n", eggs);
	}
	printf("계란 한 판을 모두 담았습니다!\n");
	return 0;
}