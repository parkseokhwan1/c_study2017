#include <stdio.h>

int user_strlen(char *);

int main()
{
	char str1[80]="Long time no see.";
	char str2[80]="What's up?";

	if(user_strlen(str1) > user_strlen(str2)) 
		printf("%s\n", str1);
	else 
		printf("%s\n", str2);

	return 0;
}

int user_strlen(char *strp)
{
	int len=0;

	while(*strp != '\0'){
		len++;
		strp++;
	}

	return len;
}