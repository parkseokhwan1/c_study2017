// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

struct Student {
	int m_nNum;
	double m_fGrade;
};

int main()
{
	/*c++�� �տ� struct ��������*/ Student s1;

	s1.m_nNum = 2;
	s1.m_fGrade = 3.14;

	printf("%d , %lf \n", s1.m_nNum, s1.m_fGrade);

    return 0;
}

