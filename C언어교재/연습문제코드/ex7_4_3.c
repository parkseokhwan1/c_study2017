#include <stdio.h>

int main()
{
	int i;

	for(i=1; i<=9; i++){
		printf("7 * %d = %2d   ", i, 7*i);
		if(i%3==0) printf("\n");
	}

	return 0;
}