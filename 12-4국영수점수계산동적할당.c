#include <stdio.h>
#include <stdlib.h>

struct st_jumsu* getScore();
// 수행내용 : 점수 구조체를 동적메모리할당받고 학생의 국어, 영어, 수학 점수를 입력받아 구조체 포인터를 리턴함
void evalScore(struct st_jumsu* p);
// 파라미터 : 구조체 포인터
// 리턴값 : 없음
// 수행내용 : 구조체 포인터를 받아 학생별 총점과 평균, 등급 계산하여 저장

struct st_jumsu{
 int kor, eng, mat;
 int sum;
 float avg;
 char grade;
};

//제공된 코드, main() 수정 금지
int main(){
	struct st_jumsu* score = getScore();
	evalScore(score);
	printf("학생의 총점은 %d 평균은 %.1f (등급 %c)\n",score->sum, score->avg, score->grade);
	return 0;
}

struct st_jumsu* getScore(){
  struct st_jumsu* s = (struct st_jumsu*)malloc(sizeof(struct st_jumsu));
  printf("국어 점수? > ");
  scanf("%d", &s->kor);
  printf("영어 점수? > ");
  scanf("%d", &s->eng);
  printf("수학 점수? > ");
  scanf("%d", &s->mat);
  return s;
}

void evalScore(struct st_jumsu* p){
  p->sum = p->kor + p->eng + p->mat;
  p->avg = p->sum / 3.0;
  if(p->avg < 60) p->grade = 'F';
  else if(p->avg < 70) p->grade = 'D';
  else if(p->avg < 80) p->grade = 'C';
  else if(p->avg < 90) p->grade = 'B';
  else p->grade = 'A';
}