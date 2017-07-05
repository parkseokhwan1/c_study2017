// 371p. 예제13-2 : 중첩된 블록에서 같은 이름의 변수를 선언한 프로그램 

#include <stdio.h>

int main()
{
	int val=10;
	{
		int val=20;
		{
			val++;
		}
		printf("val : %d\n", val);
	}
	printf("val : %d\n", val);
	return 0;
}
