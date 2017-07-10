// exam9.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

enum season {spring, summer, fall, winter};

typedef int myint;			//type 재정의

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
	int test = fall;		// == test에 2대입

	printf("%d \n", ss);
	printf("%d \n", test + 3);

	myint a = 100;			// myint가 int형으로 쓰임
	printf("%d \n", a);

    return 0;
}

