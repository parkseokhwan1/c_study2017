#include <stdio.h>

int main()
{
	int year;
	int school_fees;

	printf("�г��� �Է��ϼ��� : ");
	scanf("%d", &year);

	switch(year){
	case 1:
		school_fees=100+30;
		printf("��ϱ��� %d�����Դϴ�.\n", school_fees);
		break;
	case 2:
	case 3:
		school_fees=100;
		printf("��ϱ��� %d�����Դϴ�.\n", school_fees);
		break;
	case 4:
		school_fees=100+10;
		printf("��ϱ��� %d�����Դϴ�.\n", school_fees);
		break;
	default:
		printf("�г��� �߸� �Է��Ͽ����ϴ�.\n");
		break;
	}
	return 0;
}