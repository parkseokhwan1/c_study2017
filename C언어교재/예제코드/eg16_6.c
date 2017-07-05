// 481p. 예제16-6 : realloc함수를 사용한 양수값 입력 프로그램 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ip
	int size=5;
	int cnt=0;
	int num;
	int i;

	ip=(int *)calloc(size, sizeof(int));
	while(1){
		printf("양수를 입력하세요 => ");
		scanf("%d", &num);
		if(num<=0) break;
		if(cnt<size){
			ip[cnt++]=num;
		}
		else{
			size+=5;
			ip=(int *)realloc(ip, size*sizeof(int));
			ip[cnt++]=num;
		}
	}

	for(i=0; i<cnt; i++){
		printf("%5d", ip[i]);
	}
	free(ip);
	return 0;
}
