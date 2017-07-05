// 541p. 예제18-6 : 여러 줄의 문장을 한 줄로 출력하는 프로그램 

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *ifp, *ofp;
	char str[80];
	char *res;

	ifp=fopen("a.txt", "r");
	if(ifp==NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}

	ofp=fopen("b.txt", "w");
	if(ofp==NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}

	while(1){
		res=fgets(str, sizeof(str), ifp);
		if(res==NULL) break;
		str[strlen(str)-1]='\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}
