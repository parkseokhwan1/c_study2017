// 556p. 예제19-1 : 매크로상수를 사용한 프로그램 

#include <stdio.h>
#define PI 3.14159

int main()
{
    double radius;    

	printf("원의 반지름을 입력하세요 : ");
	scanf("%lf", &radius);
    
    printf("원의 둘레 : %lf\n", 2*PI*radius);
    printf("원의 면적 : %lf\n", PI*radius*radius);
    return 0;
}
