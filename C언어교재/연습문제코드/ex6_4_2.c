#include <stdio.h>

int main()
{
	double a, b, res;
	char op;

	printf("수식을 입력하세요 : ");
	scanf("%lf%c%lf", &a, &op, &b);

	switch(op){
	case '+' : res=a+b; break;
	case '-' : res=a-b;	break;
	case '*' : res=a*b;	break;
	case '/' : res=a/b; break;
	}

	printf("연산결과는 %.2lf입니다.\n", res);
	return 0;
}