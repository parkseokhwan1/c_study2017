// exam03.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#define BUFSIZE 256

int main()
{
	FILE *fp;
	fp = fopen("test.json", "r");

	char Buf[BUFSIZE];
	memset(Buf, 0, 256);

	int c = fread(Buf, 256, 1, fp);

	printf("%d %s \n", c, Buf);

	printf("---- �Ľ��� ��� ---- \n");

	cJSON *root = cJSON_Parse(Buf);

	cJSON *pJsonName = cJSON_GetObjectItemCaseSensitive(root, "name");
	cJSON *pJsonAge = cJSON_GetObjectItemCaseSensitive(root, "age");
	cJSON *pJsonHeight = cJSON_GetObjectItemCaseSensitive(root, "height");

	printf("�̸� : %s \n", pJsonName->valuestring);
	printf("���� : %d \n", pJsonAge->valueint);
	printf("Ű : %lf \n", pJsonHeight->valuedouble);

	fclose(fp);

    return 0;
}

