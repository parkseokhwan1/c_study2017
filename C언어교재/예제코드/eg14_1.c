// 399p. 예제14-1 : 2차원 배열을 사용하여 학생들의 점수를 처리하는 프로그램 

#include <stdio.h>

int main()
{
	int score[3][4];
	int i, j;
	int tot;
	double avg;

	for(i=0; i<3; i++){
		printf("네 과목의 점수를 입력하세요 : ");
		for(j=0; j<4; j++){
			scanf("%d", &score[i][j]);
		}
	}

	for(i=0; i<3; i++){
		tot=0;
		for(j=0; j<4; j++){
			tot+=score[i][j];
		}
		avg=tot/4.0;
		printf("총점 : %d, 평균 : %.2lf\n", tot, avg);
	}
	return 0;
}
