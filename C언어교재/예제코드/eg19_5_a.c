// 570p. ����19-5 ���A : �� �������� �Է� �޾� ��ȯ�ϰ� ����ϴ� ���α׷� 

#include <stdio.h>

void input_value(int *, int *);          
void print_value(int, int);            
void exchange(int *, int *);        
                                    
int main()
{
	int a, b;                     

	input_value(&a, &b);         
	print_value(a, b);             
	exchange(&a, &b);       
	print_value(a, b);          
	return 0;   
}

void input_value(int *ap, int *bp)     
{
	printf("�� �������� �Է��ϼ��� : ");
	scanf("%d%d", ap, bp);
}
