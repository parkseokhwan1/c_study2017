// 587p. ����20-4 : ��Ʈ�̵� �����ڸ� ����Ͽ� ������ �������� �ϴ� ���α׷� 

#include <stdio.h>
 
int main()
{
	int a=0x4;                    
	int b=0x80000004;             
	unsigned int c=0x80000004;    

	printf("a=%d, b=%d, c=%u\n", a, b, c);  
	printf("a<<2 => %d\n", a<<2);  
	printf("a>>2 => %d\n", a>>2);  
	printf("a>>3 => %d\n", a>>3);  
	printf("b<<1 => %d\n", b<<1);  
	printf("b>>1 => %d\n", b>>1);  
	printf("c>>1 => %d\n", c>>1);  
	return 0;
}
