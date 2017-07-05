// 81p. 예제3-1 : 이몽룡 봉급 계산 프로그램 

#include <stdio.h>

int main()
{
	int bonbong, bonus, total;   
	double tax, real_incom;     

	bonbong = 150;    
	bonus = 60;        

	total = bonbong + bonus;   
	tax = total * 0.09;          
	real_incom = total - tax;    

	printf("이몽룡의 실수입액은 %lf만원입니다.\n", real_incom); 
	return 0;
}
