// 459p. ����16-1 : �޸𸮸� �������� �Ҵ� �޴� ���α׷� 

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

	printf("���������� ��� : %d\n", *ip);
	printf("�Ǽ������� ��� : %lf\n", *dp);
	return 0;
}
