#include <stdio.h>

int main()
{
	int history, letters, art;
	int total;
	double average;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d%d%d", &history, &letters, &art);

	total = history + letters + art;
	average = total / 3.0;

	printf("������ %d�̰� ����� %lf�Դϴ�.\n", total, average);
	return 0;
}