#include <stdio.h>

int main()
{
	char str1[] = "There is no royal road to learning C.";
	char str2[80];
	int i;
	int size;

	size=sizeof(str1)/sizeof(str1[0]);

	for(i=0; i<size; i++){
		str2[i]=str1[i];
	}

	printf("복사된 문자열 : %s\n", str2);
	return 0;
}