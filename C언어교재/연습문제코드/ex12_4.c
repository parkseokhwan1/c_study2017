#include <stdio.h>
#include <string.h>

int main()
{
	char season[80];

	printf("계절명을 입력하세요 : ");
	scanf("%s", season);

	if(strcmp(season, "봄")==0)
		printf("개나리\n");
	else if(strcmp(season, "여름")==0)
		printf("장미\n");
	else if(strcmp(season, "가을")==0)
		printf("국화\n");
	else if(strcmp(season, "겨울")==0)
		printf("매화\n");
	else 
		printf("계절명을 잘못 입력하였습니다.\n");

	return 0;
}