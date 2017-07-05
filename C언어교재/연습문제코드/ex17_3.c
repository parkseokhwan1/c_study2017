#include <stdio.h>

struct student {
	int num;
	char name[20];
	int score[5];
	double avg;
};

struct student avg_prn(struct student);

int main()
{
	struct student s1={315, "홍길동", {82, 93, 74, 90, 65}};

	s1=avg_prn(s1);
	printf("평균 : %.1lf\n", s1.avg);

	return 0;
}

struct student avg_prn(struct student s)
{
	int i, sum=0;

	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	printf("점수 : ");
	for(i=0; i<5; i++){
		printf("%5d", s.score[i]);
		sum+=s.score[i];
	}
	s.avg=sum/5.0;
	printf("\n");
	return s;
}