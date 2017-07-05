#include <stdio.h>

int main()
{
	int year;
	int school_fees;

	printf("학년을 입력하세요 : ");
	scanf("%d", &year);

	switch(year){
	case 1:
		school_fees=100+30;
		printf("등록금은 %d만원입니다.\n", school_fees);
		break;
	case 2:
	case 3:
		school_fees=100;
		printf("등록금은 %d만원입니다.\n", school_fees);
		break;
	case 4:
		school_fees=100+10;
		printf("등록금은 %d만원입니다.\n", school_fees);
		break;
	default:
		printf("학년을 잘못 입력하였습니다.\n");
		break;
	}
	return 0;
}