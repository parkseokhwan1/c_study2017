#include <stdio.h>

void res_disp(double);

int main()
{
	res_disp(3.4);

	return 0;
}

void res_disp(double val)
{
	printf("결과값은 %lf입니다.\n", val);
}