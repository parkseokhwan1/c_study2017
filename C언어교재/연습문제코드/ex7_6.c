#include <stdio.h>

int main()
{
	int weight;
	int eggs=0;

	while(1){
		printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
		scanf("%d", &weight);

		if(weight<300) continue;
		eggs++;
		if(eggs==30) break;
		printf("���� �հ���� �� : %d\n", eggs);
	}
	printf("��� �� ���� ��� ��ҽ��ϴ�!\n");
	return 0;
}