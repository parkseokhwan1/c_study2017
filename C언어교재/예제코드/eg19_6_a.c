// 572p. 예제19-6 모듈A : 두 정수값을 입력 받아 교환하고 출력하는 프로그램(외부 변수 사용) 

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
	printf("두 정수값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
}
