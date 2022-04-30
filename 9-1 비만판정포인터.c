#include <stdio.h>
void askHW(float* h, float* w);
/*
  함수
  1. 키와 몸무게를 입력받아서 포인터에 집어넣음
  2. 키는 0.01을 곱해서 다시 포인터에 집어넣음 
*/
int main(void) {
  float height, weight, bmi; 
  int count=0;

  for(int i=0;i<5;i++){
	printf("%d번째 사람의 신장(cm)과 체중(kg)을 입력하시오. ",i+1);
    askHW(&height, &weight);
    bmi = weight / (height*height); if (bmi > 25) count++;
  }
  printf("비만인 사람은 %d명입니다.\n", count); 
  return 0;
}

void askHW(float* h, float* w){
  scanf("%f %f", h, w);
  *h = *h * 0.01;
}