// 504p. ����17-5 : ����ü�迭�� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� 

#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main()
{
	struct address list[5]={{"ȫ�浿", 23, "012-345-6789", "�︪�� ����"},
							{"�̼���", 35, "111-222-3333", "���� ��õ��"},
							{"�庸��", 19, "222-333-4444", "�ϵ� û����"},
							{"������", 15, "333-444-5555", "�泲 õ��"},
							{"���߱�", 45, "444-555-6666", "Ȳ�ص� ����"}};
	int i;   

	for(i=0; i<5; i++){
		printf("%10s%5d%15s%20s\n", 
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;
}
