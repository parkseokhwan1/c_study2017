// 399p. ����14-1 : 2���� �迭�� ����Ͽ� �л����� ������ ó���ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	int score[3][4];
	int i, j;
	int tot;
	double avg;

	for(i=0; i<3; i++){
		printf("�� ������ ������ �Է��ϼ��� : ");
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
		printf("���� : %d, ��� : %.2lf\n", tot, avg);
	}
	return 0;
}
