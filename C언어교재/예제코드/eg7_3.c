// 214p. ����7-3 : 1���� n������ ���� �ݺ��ϴ� ���α׷� 

#include <stdio.h>

int main()
{
	int n;
	int i;
	int sum;

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &n);

	while(n>0){
		sum=0;
		for(i=1; i<=n; i++){
			sum+=i;
		}
		printf("1���� %d������ ���� : %d\n", n, sum);  
		printf("����� �Է��ϼ��� : ");    
		scanf("%d", &n);        
	}
	return 0;
}
