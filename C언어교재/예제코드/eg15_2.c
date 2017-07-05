// 449p. 예제15-2 : 정수와 실수를 모두 교환할 수 있는 함수 프로그램 

#include <stdio.h>
#include <string.h>

void exchange(char *, void *, void *);
int main()
{
	int a=10, b=20;
	double da=1.5, db=2.5;

	exchange("int", &a, &b);
	printf("정수값 교환후 : %d, %d\n", a, b);

	exchange("double", &da, &db);
	printf("실수값 교환후 : %.1lf, %.1lf\n", da, db);
	return 0;
}

void exchange(char *type, void *vp1, void *vp2)
{
    int itp;
    double dtp;

    if(strcmp(type, "int")==0){
		itp=*(int *)vp1;
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itp;
	}
	if(strcmp(type, "double")==0){
		dtp=*(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtp;
	}
}
