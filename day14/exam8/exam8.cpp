// exam8.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

union Student			//������ ����
{
	char m_ary[4];
	int m_nNum;
};

int main()
{
	Student s1 = { 'a','b','c',0x00 };

	printf("%s \n", s1.m_ary);
	s1.m_ary[1] = 0x71;
	printf("%x \n", s1.m_nNum);

    return 0;
}

