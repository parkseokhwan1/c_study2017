// exam9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

enum season {spring, summer, fall, winter};

typedef int myint;			//type ������

/*
typedef struct {
	int a;
	int b;
} _MyStruct;
*/

struct _Mystruct {
	int a;
	int b;
};

int main()
{
	_Mystruct mytest;
	//struct _Mystruct mytest;

	/* (enum) */season ss;
	ss = spring;
	int test = fall;		// == test�� 2����

	printf("%d \n", ss);
	printf("%d \n", test + 3);

	myint a = 100;			// myint�� int������ ����
	printf("%d \n", a);

    return 0;
}

