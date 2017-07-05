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
	printf("==========< �޴� >==========\n\n");
	printf("1. ����(addition)\n\n");
	printf("2. ����(subtraction)\n\n");
	printf("3. ����(multiplication)\n\n");
	printf("4. ������(division)\n\n");
	printf(">> ���ϴ� �޴��� �����ϼ��� : ");
}


double add()
{
	double a, b, res;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=a+b;
	return res;
}



double sub()
{
	double a, b, res;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=a-b;
	return res;
}



double mul()
{
	double a, b, res;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=a*b;
	return res;
}


double div()
{
	double a, b, res;
	
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b);

	res=a/b;
	return res;
}


void res_disp(double val)
{
	printf("������� %lf�Դϴ�.\n", val);
}