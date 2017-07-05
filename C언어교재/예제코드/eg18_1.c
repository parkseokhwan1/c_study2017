// 525p. 예제18-1 : 입력과 출력으로 사용할 두 개의 파일을 개방하는 프로그램 

#include <stdio.h>

int main()
{
	FILE *ifp, *ofp;

	ifp=fopen("a.txt", "r");
	if(ifp==NULL){
		printf("입력파일이 개방되지 않았습니다.\n");
		return 1;
	}
	printf("입력파일이 개방되었습니다.\n");

	ofp=fopen("b.txt", "w");
	if(ofp==NULL){
		printf("출력파일이 개방되지 않았습니다.\n");
		return 1;
	}
	printf("출력파일이 개방되었습니다.\n");
	return 0;
}
