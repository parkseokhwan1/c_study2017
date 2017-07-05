// 560p. 예제19-3 : 매크로함수를 활용한 프로그램 

#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x)*(x))

int main()
{
	double radius;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius);
	printf("원의 면적은 : %.2lf", PI*SQUARE(radius));
	return 0;
}

