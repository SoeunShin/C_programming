#include <stdio.h>

int main(void) {
  int height, weight; // 신장(cm), 체중(kg) 
  float bmi; // 비만도 수치 

  printf("height? ");
  scanf("%d", &height);
  printf("weight? ");
  scanf("%d", &weight);

  bmi = weight / ((height*0.01)*(height*0.01));
  printf("Your bmi is %.1f\n", bmi);
  return 0;
}
