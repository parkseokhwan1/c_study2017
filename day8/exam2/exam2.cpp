// exam2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char str1[10] = { 'h','e','l','l','o' };
	char str2[] = { 'h','e','l','l','o','\0' };
	char str3[] = "hello";

	char str4[16];

	/*str4[16] = str3[0];
	str4[16] = str3[0];
	str4[16] = str3[0];
	str4[16] = str3[0];
	str4[16] = str3[0];
	str4[16] = str3[0];*/

	printf("size : %d \n", strlen(str3));

	//strcpy
	for (int i = 0; i < strlen(str3) + 1; i++) {
		str4[i] = str3[i];
	}

	printf("%s \n", str4);

    return 0;
}

