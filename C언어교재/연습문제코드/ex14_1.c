#include <stdio.h>

int main()
{
	int row_order[4][5], col_order[4][5];
	int i, j;
	int n=0, m=0;

	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			n++;
			row_order[i][j]=n;
		}
	}

	printf("행우선 순서로 저장된 배열\n");
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%5d", row_order[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			m++;
			col_order[j][i]=m;
		}
	}
		
	printf("열우선 순서로 저장된 배열\n");
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%5d", col_order[i][j]);
		}
		printf("\n");
	}

	return 0;
}
