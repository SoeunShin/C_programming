#include <stdio.h>

int fibonacci(int n); 

int main(void) {
  int i = 1;
  while(1){
    float ratio = (float)fibonacci(i+1)/fibonacci(i);
    float past_ratio;
    if(i == 1)
      past_ratio = ratio;
    else
      past_ratio = (float)fibonacci(i)/fibonacci(i-1);
    float diff = ratio - past_ratio;
    if(diff < 0){ // 차이의 절댓값 계산
      diff *= -1;
    } 
    if(i>1 && diff < 0.0000001) break;
    printf("%d번째 비율 (%d / %d) : %f\n", i, fibonacci(i+1), fibonacci(i), ratio);
    i++;
  }
  return 0;
}

int fibonacci(int n){
  if(n == 1 || n == 2)
    return 1;
  else return (fibonacci(n-1) + fibonacci(n-2));
}