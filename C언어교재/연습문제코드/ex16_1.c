#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *high, *low;

	high=(double *)malloc(sizeof(double));
	low=(double *)malloc(sizeof(double));

	if(high==0 || low==0){
		printf("�����Ҵ��� �޸𸮰� �����մϴ�.\n");
		return 0;
	}

	printf("�ְ��°� ��������� �Է��ϼ��� : ");
	scanf("%lf%lf", high, low);

	printf("�ϱ����� %.1lf�� �Դϴ�.\n", *high - *low);
	free(high);
	free(low);
	return 0;
}