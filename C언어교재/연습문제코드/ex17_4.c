#include <stdio.h>

struct profile{
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile *);
void elite(struct profile *);

int main()
{
	struct profile new_staff[5];

	input_data(new_staff);
	elite(new_staff);

	return 0;
}

void input_data(struct profile *sp)
{
	int i;

	printf("이름, 학점, 영어점수를 입력하세요.\n");
	for(i=0; i<5; i++){
		scanf("%s%lf%d", (sp+i)->name, &(sp+i)->grade, &(sp+i)->english);
	}
}

void elite(struct profile *sp)
{
	int i;

	for(i=0; i<5; i++){
		if((sp+i)->grade>=4.0 && (sp+i)->english>=900){
			printf("%s, %.1lf, %d\n", (sp+i)->name, (sp+i)->grade, (sp+i)->english);
		}
	}
}