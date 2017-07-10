// exam6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

struct Student {
	int m_nNum;
	double m_fGrade;
};

int main()
{
	/*c++는 앞에 struct 생략가능*/ Student s1;

	s1.m_nNum = 2;
	s1.m_fGrade = 3.14;

	printf("%d , %lf \n", s1.m_nNum, s1.m_fGrade);

    return 0;
}

