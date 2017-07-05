#include <stdio.h>
#include <string.h>

int main()
{
	char animal[][10]={"monkey", "elephant", "dog", "sheep", "pig",
					   "lion", "tiger", "puma", "turtle", "fox"};

	int i;
	int count;
	int total;
	int stored=0;
	double waste;

	total=sizeof(animal);
	count=total/sizeof(animal[0]);

	for(i=0; i<count; i++){
		printf("%s\n", animal[i]);
		stored += (strlen(animal[i])+1);
	}

	waste=total-stored;
	printf("낭비되는 기억공간의 비율 : %.2lf%%\n", waste/total*100);

	return 0;
}