// 459p. 예제16-1 : 메모리를 동적으로 할당 받는 프로그램 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ip;
	double *dp;

	ip=(int *)malloc(sizeof(int));
	dp=(double *)malloc(sizeof(double));

	*ip=10;
	*dp=3.4;

	printf("정수형으로 사용 : %d\n", *ip);
	printf("실수형으로 사용 : %lf\n", *dp);
	return 0;
}
