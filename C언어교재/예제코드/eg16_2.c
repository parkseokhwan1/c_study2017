// 464p. ����16-2 : �޸𸮸� �������� �Ҵ� �޾� �迭�� ����ϴ� ���α׷� 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ip;
	int i, sum=0;

	ip=(int *)malloc(5*sizeof(int));
	if(ip==0){
		printf("�޸𸮰� �����մϴ�!\n");
		return 1;
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for(i=0; i<5; i++){
		scanf("%d", ip+i);
		sum+=ip[i];
	}
	printf("�ټ� ���� ��ճ��� : %.1lf\n", sum/5.0);
	free(ip);
	return 0;
}
