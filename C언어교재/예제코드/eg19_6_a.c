// 572p. ����19-6 ���A : �� �������� �Է� �޾� ��ȯ�ϰ� ����ϴ� ���α׷�(�ܺ� ���� ���) 

#include <stdio.h>

void input_value();          
void print_value();            
void exchange();        
       
int a, b;
int main()
{
	input_value();         
	print_value();             
	exchange();       
	print_value();          
	return 0;   
}

void input_value()     
{
	printf("�� �������� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
}
