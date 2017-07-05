#include <stdio.h>

int main()
{
	int i;
	int age;
	int sum=0;

	for(i=1; i<=5; i++){
		printf("%d. 나이를 입력하세요 : ", i);
		scanf("%d", &age);
		sum+=age;
	}
	printf("다섯명의 평균 나이는 %.1lf입니다.", sum/5.0);
	return 0;
}