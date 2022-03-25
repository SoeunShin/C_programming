#include <stdio.h>
/*
  1. 출력모드 물어보고 입력받기
  2. 모드가 1이면(홀수단) -> 단: 3부터 시작
  3. 모드가 2이면(짝수단) -> 단: 2부터 시작
  4. 단이 9 이하인 동안 반복
    4-1. 수: 1부터 시작
    4-2. 수가 9이하인 동안 반복
      4-2-1. "단 X 수 = 단*수" 출력
      4-2-2. 수가 3의 배수이면 줄바꿈
      4-2-3. 수++
    4-3. 줄바꿈
    4-4. 단 += 2
*/
int main(void) {
  int mode;
  int i, j; // i: 단, j: 수

  printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요. ");
  scanf("%d", &mode);

  if(mode == 1) i = 3;
  else if(mode == 2) i = 2;

  while(i <= 9){
    j = 1;
    while(j <= 9){
      printf("%d X %d = %2d    ", i, j, i*j);
      if(j % 3 == 0) printf("\n");
      j++;
    }   
    printf("\n");
    i += 2;
  }
  return 0;
}