#include <stdio.h>

int main()
{
	char word[80];
	int i;

	printf("단어를 입력하세요 : ");
	scanf("%s", word);

	i=0;
	while(word[i]!='\0'){
		i++;
	}

	printf("%s단어의 길이는 %d자입니다.\n", word, i);
	return 0;
}