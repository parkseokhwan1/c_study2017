#include <stdio.h>

int main()
{
	char *str="watermelon";
	int i=0;

	while(str[i] != '\0'){
		if(i%2==0) printf("%c", str[i]);
		i++;
	}

	return 0;
}