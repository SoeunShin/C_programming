#include <stdio.h>
/*
  1. 10번 반복
    1-1. 심사점수 물어보고 입력받기
    1-2. total에 현재 입력받은 점수 더하기
    1-3. max보다 크면 max값 수정
    1-4. min보다 작으면 min값 수정
  2. total에서 max와 min 빼기
  3. avg = total / 8
  4. 결과 출력
*/
int main(void) {
  float score[10];      // 심사점수
  float max=0, min=10;       // 가장 큰 점수, 가장 작은 점수
  float total=0;          // 점수 총 합계
  float average;        // 평균점수
  int i;                // 반복문을 위한 변수

  for(i=0; i<10; i++){
    printf("%d번 심사점수? ", i+1);
    scanf("%f", &score[i]);
    total += score[i];
    if(score[i] > max) max = score[i];
    if(score[i] < min) min = score[i];
  }
  total -= (max + min);
  average = total/8;
  printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 %.1f입니다.\n", average);
  return 0;
} 
