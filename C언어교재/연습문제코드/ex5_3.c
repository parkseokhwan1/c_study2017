#include <stdio.h>

int main()
{
	char name[80]="È«±æµ¿";
	int kor=90, eng=75, mat=80;
	int total;
	double average;

	total = kor + eng + mat;
	average = total / 3.0;

	printf("|----------|--------|--------|--------|--------|----------|\n");
	printf("|   ÀÌ¸§   |  ±¹¾î  |  ¿µ¾î  |  ¼öÇÐ  |  ÃÑÁ¡  |   Æò±Õ   |\n");
	printf("|----------|--------|--------|--------|--------|----------|\n");
	printf("|%-10s|%8d|%8d|%8d|%8d|%10.2lf|\n", 
		name, kor, eng, mat, total, average);
	printf("|----------|--------|--------|--------|--------|----------|\n");

	return 0;
}