#include <stdio.h>
void maxMinOfTen(int number[10], int* maxmin[2]);

int main(void) {
  int num[10];      // 10개의 숫자를 받을 배열
  int* max_min[2];  // 최댓값과 최솟값을 가리킬 포인터 배열 
  for(int i=0;i<10;i++){
    printf("%d번째 숫자를 입력하시오. ", i+1);
    scanf("%d", &num[i]); 
  }
  maxMinOfTen(num, max_min);
  printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", *max_min[0], *max_min[1]); 
  return 0;
}

void maxMinOfTen(int number[10], int* maxmin[2]){
  int max = 0, min = 1000000;
  for(int i=0; i<10; i++){
    if(max < number[i]){
      max = number[i];
      maxmin[0] = &number[i];
    }
    if(min > number[i]){
      min = number[i];
      maxmin[1] = &number[i];
    }
  }
}
