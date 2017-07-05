// 153p. 예제5-2 : 필드옵션의 여러 가지 사용 예 

#include <stdio.h>

int main()
{
	printf("12345678901234567890\n");  

	printf("%10c\n", 'A');             
	printf("%10d\n", 128);              

	printf("%10lf\n", 3.1415926);       
	printf("%10le\n", 3.1415926);       

	printf("%10.3lf\n", 3.1415926);      
	printf("%10.4s\n", "Love is");        
	printf("%5lf\n", 3.1415926);         

	return 0;
}
