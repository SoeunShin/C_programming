#include <stdio.h>
float evalBmi(int h, int w);
/*
  1. 파일을 읽기 모드로 열기
  2. 키와 몸무게를 파일 끝이 나올 때까지 읽음
    2-1. 각 사람의 키와 몸무게를 출력
    2-2. bmi 계산
    2-3. bmi가 25 이상이면 count 증가
  3. 비만인 사람 수 출력 
*/
int main(void) {
  float height, weight, bmi;
  int count=0, i=0;
  // 이 곳에 코드를 작성하라.
  FILE* file;
  file = fopen("data.txt", "r");
  while(EOF != fscanf(file, "%f %f", &height, &weight)){
    printf("%d번째 사람의 신장(cm)과 체중(kg): %d %d\n", i+1, (int)height, (int)weight);
    i++;
    bmi = weight / (height*0.01*height*0.01);
    if(bmi >= 25) count++;
  }
  fclose(file);
  printf("비만인 사람은 %d명입니다.\n", count);
  return 0;
}
