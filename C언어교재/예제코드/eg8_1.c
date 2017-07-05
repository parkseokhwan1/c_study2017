// 234p. 예제8-1 : 함수를 사용한 성적계산 프로그램 

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

	printf("세 과목의 점수를 입력하세요 : ");
	scanf("%d%d%d", &kor, &eng, &mat);

	tot=total(kor, eng, mat);
	avg=average(tot);

	printf("총점 : %d, 평균 : %.1lf\n", tot, avg);
	return 0;
}
