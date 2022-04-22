#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 5번 반복 // 5명의 학생 점수 생성
    1-1. 3번 반복 // 국, 영, 수 
      1-1-1. 50~100 사이의 랜덤 정수 생성 
      1-1-2. 학생별 총점에 더해줌 
      1-1-3. 과목별 총점에 더해줌 
  2. 5번 반복 // 5명의 학생 점수 출력
    2-1. "i번 학생 : " 출력 
    2-2. 3번 반복
      2-2-1. j<2이면 -> "classname[j] jumsu[i][j], "  출력
      2-2-2. 나머지 -> "classname[j] jumsu[i][j]\n" 출력 
  2. 3번 반복 // 과목별 평균 계산 
    2-1. 각 과목별 총점을 5.0으로 나누어 과목별 평균에 저장 
    2-2. 각 과목별 총점과 평균 출력 
  3. 5번 반복 // 학생별 평균, 등급 계산 
    3-1. 각 학생별 총점을 3.0으로 나누어 학생별 평균에 저장 
    3-2. 평균이 60 미만 -> F
         70 미만 -> D
         60 미만 -> C
         50 미만 -> B
         나머지 -> A
    3-3. 각 학생별 총점과 평균, 등급 출력 
*/
int main(void) {
  int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  char classname[3][20]={"국어","영어","수학"};
  int sum_student[5] = {0};         // 학생별 총점
  float average_student[5];   // 학생별 평균
  char grade[5];              // 학생별 등급 
  int sum_class[3] = {0};           // 과목별 총점
  float average_class[3];     // 과목별 평균
  int i, j;

  srand(time(0));
  for(i=0; i<5; i++){
    for(j=0; j<3; j++){
      jumsu[i][j] = rand()%51+50;
      sum_student[i] += jumsu[i][j];
      sum_class[j] += jumsu[i][j];
    }
  }
  
  printf("5명의 학생 점수가 생성되었습니다.\n");
  for(i=0; i<5; i++){
    printf("%d번 학생 : ", i+1);
    for(j=0; j<3; j++){
      if(j<2)
        printf("%s %d, ", classname[j], jumsu[i][j]);
      else
        printf("%s %d\n", classname[j], jumsu[i][j]);
    }
  }
  
  printf("1) 각 과목별 총점과 평균점수\n");
  for(i=0; i<3; i++){
    average_class[i] = sum_class[i] / 5.0;
    printf("%s 점수의 총점은 %d 평균은 %.1f\n", classname[i], sum_class[i], average_class[i]);
  }

  printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
  for(i=0; i<5; i++){
    average_student[i] = sum_student[i] / 3.0;
    if(average_student[i] < 60) grade[i] = 'F';
    else if(average_student[i] < 70) grade[i] = 'D';
    else if(average_student[i] < 80) grade[i] = 'C';
    else if(average_student[i] < 90) grade[i] = 'B';
    else grade[i] = 'A';
    printf("%d번 학생의 총점은 %d 평균은 %.1f(등급 %c)\n", i+1, sum_student[i], average_student[i], grade[i]);
  }
	return 0;
}