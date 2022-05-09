#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int classSum(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 과목번호(0,1,2) 
// 리턴값 : 해당 과목의 총점
int studentSum(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4) 
// 리턴값 : 해당 학생의 총점
char studentGrade(int s[5][3], int classnum);
// 파라미터 : 점수배열(s)과 학생번호(0,1,2,3,4) 
// 리턴값 : 해당 학생의 등급 ('A','B','C','D','F')

int main(void) {
  int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  char classname[3][20]={"국어","영어","수학"};
  int sum_student[5];         // 학생별 총점
  float average_student[5];   // 학생별 평균
  char grade[5];              // 학생별 등급 
  int sum_class[3];           // 과목별 총점
  float average_class[3];     // 과목별 평균
  int i, j;                   // 반복문을 위한 변수

  srand(time(0));
  printf("5명의 학생 점수가 생성되었습니다.\n");
  for(i=0; i<5; i++){
    for(j=0; j<3; j++){
      jumsu[i][j] = rand()%51+50;
    }
    printf("%d번 학생 : 국어 %d, 영어 %d, 수학 %d\n", i+1, jumsu[i][0], jumsu[i][1], jumsu[i][2]);
  }
  
  printf("1) 각 과목별 총점과 평균점수\n");
  for(i=0; i<3; i++){ // 과목별 총점, 평균점수 저장 및 출력
    sum_class[i] = classSum(jumsu, i); // 총점 
    average_class[i] = sum_class[i] / 3.0; // 평균점수 
    printf("%s 점수의 총점은 %d 평균은 %.1f\n", classname[i], sum_class[i], average_class[i]);
  }

  printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
  for(i=0; i<5; i++){ // 학생별 총점, 평균점수, 등급 저장 및 출력
    sum_student[i] = studentSum(jumsu, i); // 총점 
    average_student[i] = sum_student[i] / 3.0; // 평균점수 
    grade[i] = studentGrade(jumsu, i); // 등급 
    printf("%d번 학생의 총점은 %d 평균은 %.1f(등급 %c)\n", i+1, sum_student[i], average_student[i], grade[i]);
  }
  return 0;
}

int classSum(int s[5][3], int classnum){
	int sum = 0;
  for(int i=0; i<5; i++){
    sum += s[i][classnum];
  }
  return sum;
}
int studentSum(int s[5][3], int classnum){
	int sum = 0;
  for(int i=0; i<3; i++){
    sum += s[classnum][i];
  }
  return sum;
}
char studentGrade(int s[5][3], int classnum){
	char grade;
  float avg;
  int sum;
  for(int i=0; i<3; i++){
    sum += s[classnum][i];
  }
  avg = sum / 3.0;

  if(avg < 60) grade = 'F';
  else if(avg < 70) grade = 'D';
  else if(avg < 80) grade = 'C';
  else if(avg < 90) grade = 'B';
  else grade = 'A';
  
  return grade;
}