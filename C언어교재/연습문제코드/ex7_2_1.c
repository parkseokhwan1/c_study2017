#include <stdio.h>

int main()
{
	int i;
	int sum=0;
	
	i=1;
	while(i<=100){
		if(i%2!=0) sum=sum+i;
		i=i+1;
	}

	printf("1부터 100까지 홀수의 합은 : %d\n", sum);
	return 0;
}