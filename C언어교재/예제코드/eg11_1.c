// 324p. 예제11-1 : 배열을 다루는 함수를 사용한 프로그램 

#include <stdio.h>

void input_growth(double *);
double average_growth(double *);
int extra_growth(double *, double);

int main()
{
	double growth[10];
	double avg;
	int ext;

	input_growth(growth);
	avg=average_growth(growth);
	ext=extra_growth(growth, avg);

	printf("평균 경제성장률 : %.1lf\n", avg);
	printf("평균 경제성장률을 초과한 횟수 : %d\n", ext);

	return 0;
}

void input_growth(double *gp)
{
	int i;

	printf("10년간 경제성장률을 입력하세요 : ");
	for(i=0; i<10; i++){
		scanf("%lf", gp+i);
	}
}

double average_growth(double *gp)
{
	double tot=0;
	int i;

	for(i=0; i<10; i++){
		tot+=gp[i];
	}
	return tot/10;
}

int extra_growth(double *gp, double avg)
{
	int count=0;
	int i;

	for(i=0; i<10; i++){
		if(gp[i]>avg) count++;
	}
	return count;
}
