// 218p. ����7-4 : ���� �ݺ� ���α׷� 

#include <stdio.h>

int main()
{
	int sum=0;
	int n;

	while(1){
		printf("0�Ǵ� ������� �Է��ϼ��� : ");
		scanf("%d", &n);
		if(n<0) break;
		sum+=n;
	}
	printf("�� ���� ������ �� : %d\n", sum);  
	return 0;
}
