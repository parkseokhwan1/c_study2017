#include <stdio.h>

int main()
{
	char word[80];
	int i;

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", word);

	i=0;
	while(word[i]!='\0'){
		i++;
	}

	printf("%s�ܾ��� ���̴� %d���Դϴ�.\n", word, i);
	return 0;
}