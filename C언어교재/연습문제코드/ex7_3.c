#include <stdio.h>

int main()
{
	int n;
	int i;

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &n);

	i=0;
	while(i<n){
		printf("*");
		i++;
		if(i%5==0) printf("\n");
	}
	return 0;
}