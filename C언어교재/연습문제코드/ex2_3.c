#include <stdio.h>

int main()
{
	int height;   
	int weight;  
	int cha;      

	height = 168;  
	weight = 48;   
	cha = height - weight;   

	printf("키 : %dcm\n", height);     
	printf("몸무게 : %dkg\n", weight);  
	printf("키에서 몸무게를 뺀 값은 %d입니다.", cha);  
	return 0;
}