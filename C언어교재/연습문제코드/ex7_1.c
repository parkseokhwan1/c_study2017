#include <stdio.h>

int main()
{
	int n;
	int sum=0;

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &n);

	while(n>=0){
		sum=sum+n;
		printf("���ݱ��� �Էµ� ���� �� : %d\n", sum);
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &n);
	}

	return 0;
}