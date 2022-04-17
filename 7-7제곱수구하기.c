#include <stdio.h>
#include <math.h>
/*
  1. 5번 반복 // 숫자 5개 입력받기 
    1-1. 숫자를 입력받아 number[i]에 저장 
  2. 5번 큰 반복(i)
    2-1. 5번 작은 반복(j)
      2-1-1. pow_value[i][j]에 pow(number[i],number[j])를 저장
      2-1-2. pow(number[i],number[j])가 min보다 작으면
        2-1-2-1. min을 교체 
        2-1-2-2. min_a = number[i], min_b = number[j] 저장 
      2-1-3. pow(number[i],number[j])가 max보다 크면 
        2-1-3-1. max를 교체 
        2-1-3-2. max_a = number[i], max_b = number[j] 저장 
  3. 입력하신 5개의 수로 제곱수를 만들면... 출력
  4. max_a, max_b, max 출력 
  5. min_a, min_b, min 출력
*/
int main(void) {
  int number[5];        // 입력받은 5개의 숫자
  int pow_value[5][5];  // 임의의 두 수 a, b로 만들 수 있는 a^b의 값 들
  int max=0, min=pow(10,9);        // 최댓값과 최솟값
  int max_a, max_b;     // 최댓값을 만들어 내는 경우의 a와 b의 값
  int min_a, min_b;     // 최솟값을 만들어 내는 경우의 a와 b의 값
  int i, j;             // 반복문을 위한 변수
  
  printf("2에서 9 사이의 숫자 5개를 입력 \n");
  for(i=0; i<5; i++){
    scanf("%d", &number[i]);
  }
  
  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      pow_value[i][j] = pow(i,j);
      if(i != j){
        if(pow(number[i],number[j]) < min){
          min = pow(number[i],number[j]);
          min_a = number[i];
          min_b = number[j];
        }
        if(pow(number[i],number[j]) > max){
          max = pow(number[i],number[j]);
          max_a = number[i];
          max_b = number[j];
        }
      }
    }
  }

  printf("입력하신 5개의 수로 제곱수를 만들면...\n");
  printf("가장 큰 수는 %d의 %d승인 %d입니다.\n", max_a, max_b, max);
  printf("가장 작은 수는 %d의 %d승인 %d입니다.\n", min_a, min_b, min);
  return 0;
}