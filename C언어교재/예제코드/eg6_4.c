// 188p. 예제6-4 : switch~case 구문을 사용한 추첨 프로그램 

#include <stdio.h>

int main()
{
	int lot;

	printf("당첨 번호를 입력하세요 : ");
	scanf("%d", &lot);

	switch(lot){
	case 1: 
		printf("김서방");
		break;
	case 2: 
		printf("홍가네");
		break;
	case 3:
		printf("안산댁");
		break;
	default:
		printf("당첨자가 없습니다!");
		break;
	}
	return 0;
}
