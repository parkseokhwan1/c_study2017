// 409p. 예제14-3 : 포인터배열을 사용하여 여러 개의 문자열을 출력하는 프로그램 

#include <stdio.h>

int main()
{
	char *ptr_ary[5];
	int i;

	ptr_ary[0]="dog";
	ptr_ary[1]="elephant";
	ptr_ary[2]="horse";
	ptr_ary[3]="tiger";
	ptr_ary[4]="lion";

	for(i=0; i<5; i++){
		printf("%s\n", ptr_ary[i]);
	}
	return 0;
}
