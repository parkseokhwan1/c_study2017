#include <stdio.h>

int main()
{
	int val;

	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &val);
	if(val<0) val = -val;
	printf("���밪�� %d�Դϴ�.\n", val);
	return 0;
}