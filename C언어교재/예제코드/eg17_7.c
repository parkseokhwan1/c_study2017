// 512p. 예제17-7 : 열거형을 사용한 프로그램 

#include <stdio.h>

enum season {spring, summer, fall, winter};

int main()
{
	enum season ss;
	char *cp;

	ss=spring;

	switch(ss){
	case spring: 
		cp="inline"; break;
	case summer: 
		cp="swimming"; break;
	case fall: 
		cp="trip"; break;
	case winter: 
		cp="skiing"; break;
	}
	printf("나의 레저활동 => %s\n", cp);
	return 0;
}


