// 234p. ����8-1 : �Լ��� ����� ������� ���α׷� 

#include <stdio.h>

int total(int kor, int eng, int mat)
{
	int tot;
	tot=kor+eng+mat;
	return tot;
}

double average(int tot)
{
	double avg;
	avg=tot/3.0;
	return avg;
}

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf("%d%d%d", &kor, &eng, &mat);

	tot=total(kor, eng, mat);
	avg=average(tot);

	printf("���� : %d, ��� : %.1lf\n", tot, avg);
	return 0;
}
