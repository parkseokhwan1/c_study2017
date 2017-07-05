#include <stdio.h>

void str_prn(char **, int);

int main()
{
	char *ptr_ary[]={"eagle", "tiger", "lion", "squirrel"};
	int count;

	count=sizeof(ptr_ary)/sizeof(ptr_ary[0]);

	str_prn(ptr_ary, count);

	return 0;
}

void str_prn(char **spp, int count)
{
	int i;

	for(i=0; i<count; i++){
		printf("%s\n", spp[i]);
	}
}