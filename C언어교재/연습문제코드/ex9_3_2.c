#include <stdio.h>

int main()
{
	char word[80];
	int i;
	int count;

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", word);

	for(i=0; word[i]!='\0'; i++);
	count=i;
	
	printf("�ܾ �������� : ");
	for(i=count-1; i>=0; i--){
		printf("%c", word[i]);
	}

	return 0;
}