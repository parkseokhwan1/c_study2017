// 499p. 예제17-4 : 구조체를 리턴하여 두 변수의 값을 바꾸는 프로그램 

#include <stdio.h>

struct vision{
	double left;
	double right;
};
struct vision exchange(struct vision);

int main()
{
	struct vision robot;
	printf("로보트의 시력을 입력하세요(좌, 우) : ");
	scanf("%lf%lf", &robot.left, &robot.right);
	robot=exchange(robot);
	printf("바뀐 로보트의 시력(좌, 우) : %.1lf, %.1lf\n",
		robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp=robot.left;
	robot.left=robot.right;
	robot.right=temp;
	return robot;
}

