// 371p. ����13-2 : ��ø�� ��Ͽ��� ���� �̸��� ������ ������ ���α׷� 

#include <stdio.h>

int main()
{
	int val=10;
	{
		int val=20;
		{
			val++;
		}
		printf("val : %d\n", val);
	}
	printf("val : %d\n", val);
	return 0;
}
