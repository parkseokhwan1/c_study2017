#include <stdio.h>

void input_string(char(*)[80]);
void print_string(char(*)[80]);

int main()
{
	char str[5][80];

	input_string(str);
	print_string(str);

	return 0;
}

void input_string(char (*sp)[80])
{
	int i;

	printf("�ټ� ���� ������ �Է��ϼ���.\n");
	for(i=0; i<5; i++){
		gets(sp[i]);
	}
}

void print_string(char (*sp)[80])
{
	int i;

	printf("�Էµ� ������...\n");
	for(i=0; i<5; i++){
		puts(sp[i]);
	}
}