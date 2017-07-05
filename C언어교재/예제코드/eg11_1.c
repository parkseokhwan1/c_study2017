// 324p. ����11-1 : �迭�� �ٷ�� �Լ��� ����� ���α׷� 

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

	printf("��� ��������� : %.1lf\n", avg);
	printf("��� ����������� �ʰ��� Ƚ�� : %d\n", ext);

	return 0;
}

void input_growth(double *gp)
{
	int i;

	printf("10�Ⱓ ����������� �Է��ϼ��� : ");
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
