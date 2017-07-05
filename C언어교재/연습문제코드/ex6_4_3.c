#include <stdio.h>

int main()
{
	int code;         
	int amount;       
	
	double basic;     
	double price;     
	double tax_rate;  
	double total;     
	double tax;       

	printf("코드번호를 입력하세요(1가정용, 2산업용, 3교육용) : ");
	scanf("%d", &code);
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &amount);

	switch(code){
	case 1: 
		basic=1130;
		price=127.8;
		tax_rate=0.09;
		break;
	case 2: 
		basic=660;
		price=88.5;
		tax_rate=0.08;
		break;
	case 3: 
		basic=370;
		price=52.0;
		tax_rate=0.05;
		break;
	}

	total = basic + (amount * price);
	tax = total * tax_rate;

	printf("전기 요금은 %.0lf원입니다.\n", total+tax);

	return 0;
}