#include <stdio.h>

int main()
{
	char name[80]="ȫ�浿";
	int kor=90, eng=75, mat=80;
	int total;
	double average;

	total = kor + eng + mat;
	average = total / 3.0;

	printf("|----------|--------|--------|--------|--------|----------|\n");
	printf("|   �̸�   |  ����  |  ����  |  ����  |  ����  |   ���   |\n");
	printf("|----------|--------|--------|--------|--------|----------|\n");
	printf("|%-10s|%8d|%8d|%8d|%8d|%10.2lf|\n", 
		name, kor, eng, mat, total, average);
	printf("|----------|--------|--------|--------|--------|----------|\n");

	return 0;
}