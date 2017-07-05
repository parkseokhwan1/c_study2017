#include <stdio.h>
#include <string.h>

int main()
{

	char animal[5][9]={"dog", "elephant", "monkey", "rabbit", "tiger"};
	char *ptr_ary[5];
	char *longest;
	int i;

	for(i=0; i<5; i++){
		ptr_ary[i]=animal[i];
	}

	longest=ptr_ary[0];
	for(i=1; i<5; i++){
		if(strlen(ptr_ary[i])>strlen(longest)){
			longest=ptr_ary[i];
		}
	}

	printf("가장 이름이 긴 동물은 : %s\n", longest);
	return 0;
}