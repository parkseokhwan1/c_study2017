#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80]="Long time no see.";
	char str2[80]="What's up?";

	if(strlen(str1) > strlen(str2)) 
		printf("%s\n", str1);
	else 
		printf("%s\n", str2);

	return 0;
}