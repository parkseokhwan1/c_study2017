#include <stdio.h>

int main()
{
	int dan;
	int i;

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf("%d", &dan);

	i=1;
	while(i<=9){
		printf("%d * %d = %d\n", dan, i, dan*i);
		i=i+1;
	}
	return 0;
}