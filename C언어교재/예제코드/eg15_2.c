// 449p. ����15-2 : ������ �Ǽ��� ��� ��ȯ�� �� �ִ� �Լ� ���α׷� 

#include <stdio.h>
#include <string.h>

void exchange(char *, void *, void *);
int main()
{
	int a=10, b=20;
	double da=1.5, db=2.5;

	exchange("int", &a, &b);
	printf("������ ��ȯ�� : %d, %d\n", a, b);

	exchange("double", &da, &db);
	printf("�Ǽ��� ��ȯ�� : %.1lf, %.1lf\n", da, db);
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
