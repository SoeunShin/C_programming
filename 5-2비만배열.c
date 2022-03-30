#include <stdio.h>
/*
  1. 10번 반복
    1-1. 신장과 체중 물어보고 입력받기
    1-2. 비만도 계산
    1-3. 비만도 >= 25 ----> 비만 인원수++
  2. 10번 반복
    2-1. 배열에 저장된 비만도를 하나씩 불러와 25 이상이면 비만이라고 출력
  3. 총 비만 인원수 출력
*/
int main(void) {
  int height[10], weight[10];   // 10명의 신장(cm), 체중(kg)
  float bmi[10];                // 10명의 비만도 수치
  int count=0;                    // 비만인 사람의 숫자
  int i;                        // 반복문을 위한 변수

  for(i=0; i<10; i++){
    printf("%d번째 사람의 신장과 체중? ", i+1);
    scanf("%d %d", &height[i], &weight[i]);
    bmi[i] = weight[i] / (height[i]*0.01*height[i]*0.01);
    if(bmi[i] >= 25) count++;
  }
  for(i=0; i<10; i++){
    if(bmi[i] >= 25)
      printf("%d번째 사람은 비만\n", i+1);
  }
  printf("\n총 %d명의 사람이 비만\n", count);
  return 0;
}