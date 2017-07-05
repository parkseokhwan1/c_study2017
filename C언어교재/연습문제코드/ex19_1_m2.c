#include <stdio.h>

extern char grd;

void input_score(int *kor, int *eng, int *mat)
{
	printf("세 과목의 점수를 입력 하세요 : ");
	scanf("%d%d%d", kor, eng, mat);
}

int total(int kor, int eng, int mat)
{
	int tot;

	tot=kor+eng+mat;
	return tot;
}

double grade(int tot)
{
    double avg;

    avg = tot / 3.0;
    if(avg >= 90) grd = 'A';
    else if(avg >= 80) grd = 'B';
    else if(avg >= 70) grd = 'C';
    else grd = 'F';
	return avg;
}