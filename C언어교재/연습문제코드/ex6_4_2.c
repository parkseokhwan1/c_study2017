#include <stdio.h>

int main()
{
	double a, b, res;
	char op;

	printf("������ �Է��ϼ��� : ");
	scanf("%lf%c%lf", &a, &op, &b);

	switch(op){
	case '+' : res=a+b; break;
	case '-' : res=a-b;	break;
	case '*' : res=a*b;	break;
	case '/' : res=a/b; break;
	}

	printf("�������� %.2lf�Դϴ�.\n", res);
	return 0;
}