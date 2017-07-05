// 504p. 예제17-5 : 구조체배열을 초기화하고 출력하는 프로그램 

#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main()
{
	struct address list[5]={{"홍길동", 23, "012-345-6789", "울릉도 독도"},
							{"이순신", 35, "111-222-3333", "서울 건천동"},
							{"장보고", 19, "222-333-4444", "완도 청해진"},
							{"유관순", 15, "333-444-5555", "충남 천안"},
							{"안중근", 45, "444-555-6666", "황해도 해주"}};
	int i;   

	for(i=0; i<5; i++){
		printf("%10s%5d%15s%20s\n", 
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;
}
