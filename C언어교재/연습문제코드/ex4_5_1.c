#include <stdio.h>

int main()
{
	double f, c;  // fahrenheit, celsius

	printf("화씨 온도를 입력하세요 : ");
	scanf("%lf", &f);

	c = (5/9.0)*(f-32);

	printf("섭씨 온도는 %.1lf도입니다.\n", c);

	return 0;
}