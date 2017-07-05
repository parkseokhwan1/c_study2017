#include <stdio.h>

void line_up(double *, double *, double *);
void exchange(double *, double *);

int main()
{
	double max, mid, min;

	printf("숫자 세 개를 입력하세요 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);

	line_up(&max, &mid, &min);
	printf("큰 수부터 차례로 출력하면 : %lf, %lf, %lf\n", max, mid, min);
	return 0;
}

void line_up(double *mp, double *ip, double *np)
{
	if(*mp < *ip) exchange(mp, ip);
	if(*mp < *np) exchange(mp, np);
	if(*ip < *np) exchange(ip, np);
}

void exchange(double *xp, double *yp)
{
	double temp;

	temp=*xp;
	*xp=*yp;
	*yp=temp;
}