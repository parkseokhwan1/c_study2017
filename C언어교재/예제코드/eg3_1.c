// 81p. ����3-1 : �̸��� ���� ��� ���α׷� 

#include <stdio.h>

int main()
{
	int bonbong, bonus, total;   
	double tax, real_incom;     

	bonbong = 150;    
	bonus = 60;        

	total = bonbong + bonus;   
	tax = total * 0.09;          
	real_incom = total - tax;    

	printf("�̸����� �Ǽ��Ծ��� %lf�����Դϴ�.\n", real_incom); 
	return 0;
}
