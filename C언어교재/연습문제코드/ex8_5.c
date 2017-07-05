#include <stdio.h>

void menu_disp();
double add();
double sub();
double mul();
double div();
void res_disp(double);

int main()
{
	int selection;
	double result;

	menu_disp();
	scanf("%d", &selection);

	switch(selection){
	case 1: 
		result=add(); 
		break;
	case 2: 
		result=sub(); 
		break;
	case 3: 
		result=mul(); 
		break;
	case 4: 
		result=div(); 
		break;
	}

	res_disp(result);

	return 0;
}


void menu_disp()
{
	printf("==========< 메뉴 >==========\n\n");
	printf("1. 덧셈(addition)\n\n");
	printf("2. 뺄셈(subtraction)\n\n");
	printf("3. 곱셈(multiplication)\n\n");
	printf("4. 나눗셈(division)\n\n");
	printf(">> 원하는 메뉴를 선택하세요 : ");
}


double add()
{
	double a, b, res;
	
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=a+b;
	return res;
}



double sub()
{
	double a, b, res;
	
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=a-b;
	return res;
}



double mul()
{
	double a, b, res;
	
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=a*b;
	return res;
}


double div()
{
	double a, b, res;
	
	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b);

	res=a/b;
	return res;
}


void res_disp(double val)
{
	printf("결과값은 %lf입니다.\n", val);
}