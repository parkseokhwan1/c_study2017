// exam6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

struct Student {
	char *m_pszName;
	int m_nNum;
	double m_fGrade;
};

int main()
{
	/* (struct) */ Student s1 = {
		"parkseokhwan",
		2,
		3.14
	};

	Student s2 = {
		"honggildong",
		3,
		6.28
	};

	/*s1.m_pszName = (char *)malloc(sizeof("parkseokhwan"));
	strcpy(s1.m_pszName, "parkseokhwan");*/

	/*s1.m_pszName = "parkseokhwan";
	s1.m_nNum = 2;
	s1.m_fGrade = 3.14;*/

	printf("%s , %d , %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);

	Student temp;

	temp = s1;		//����ü ��� ������ ����
	s1.m_fGrade = 0;

	printf("s1 : %s , %d , %lf \n", s1.m_pszName, s1.m_nNum, s1.m_fGrade);
	printf("temp : %s , %d , %lf \n", temp.m_pszName, temp.m_nNum, temp.m_fGrade);

	//free(s1.m_pszName);

    return 0;
}

