#include <stdio.h>
/*
  1. 5번 반복
    1-1. 국어, 영어, 수학 점수 물어보고 입력받기
  2. 5번 큰 반복
    2-1. 3번 작은 반복
      2-1-1. 학생별 총점 += 각 학생의 국어, 영어, 수학 점수
      2-1-2. 과목별 총점 += 5명의 학생에서 해당 과목의 점수
  3. (각 과목별 총점과 평균점수) 3번 반복
    3-1. 과목별 총점에서 5를 나눠 평균을 구함
    3-2. 각 과목의 총점과 평균 출력
  4. (각 학생별 총점과 평균, 등급) 5번 반복
    4-1. 학생별 총점에서 3을 나누어 평균을 구함
    4-2. 등급 판정
      4-2-1. 60 미만 --> F
      4-2-2. 70 미만 --> D
      4-2-3. 80 미만 --> C
      4-2-4. 90 미만 --> B
      4-2-5. 나머지 --> A
  4-3. 각 학생의 총점, 평균, 등급 출력
*/
int main(void) {
  int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  int sum_student[5]={0};         // 학생별 총점
  float average_student[5];   // 학생별 평균
  char grade[5];              // 학생별 등급 
  int sum_class[3]={0};           // 과목별 총점
  float average_class[3];     // 과목별 평균
  int i, j;                   // 반복문을 위한 변수 
  char subject[3][10]={"국어", "영어", "수학"};

  for(i=0; i<5; i++){
    printf("%d번 학생 국어, 영어, 수학 점수? ", i+1);
    scanf("%d %d %d", &jumsu[i][0], &jumsu[i][1], &jumsu[i][2]);
  }
  for(i=0; i<5; i++){
    for(j=0; j<3; j++) {
      sum_student[i] += jumsu[i][j];
      sum_class[j] += jumsu[i][j];
    }
  }
  printf("1) 각 과목별 총점과 평균점수\n");
  for(i=0; i<3; i++){
    average_class[i] = sum_class[i]/5.0;
    printf("%s 점수의 총점은 %d 평균은 %.1f\n", subject[i], sum_class[i], average_class[i]);
  }
  
  printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
  for(i=0; i<5; i++){
    average_student[i] = sum_student[i]/3.0;
    if(average_student[i] < 60) grade[i] = 'F';
    else if(average_student[i] < 70) grade[i] = 'D';
    else if(average_student[i] < 80) grade[i] = 'C';
    else if(average_student[i] < 90) grade[i] = 'B';
    else grade[i] = 'A';
    printf("%d번 학생의 총점은 %d 평균은 %.1f(등급 %c)\n", i+1, sum_student[i], average_student[i], grade[i]);
  }
  return 0;
}