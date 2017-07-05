// 158p. 예제5-3 : scanf함수의 기본적인 입력 형태 

#include <stdio.h>

int main()
{
	char ch1, ch2;
	int in;
	unsigned int uin;
	float ft;
	double db;

	scanf("%c", &ch1);
	scanf("%d", &ch2);

	scanf("%d", &in);
	scanf("%d", &uin);

	scanf("%lf", &db);
	scanf("%f", &ft);
	return 0;
}
