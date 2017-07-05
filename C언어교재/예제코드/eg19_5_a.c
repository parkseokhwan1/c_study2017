// 570p. 예제19-5 모듈A : 두 정수값을 입력 받아 교환하고 출력하는 프로그램 

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
	printf("두 정수값을 입력하세요 : ");
	scanf("%d%d", ap, bp);
}
