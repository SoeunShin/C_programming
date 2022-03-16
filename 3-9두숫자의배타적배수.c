#include <stdio.h>
/*
  1. 숫자 2개 물어보고 입력받기
  2. 1부터 100까지 반복
    2-1. num1의 배수이고 num2의 배수가 아니면 출력
    2-2. num2의 배수이고 num1의 배수가 아니면 출력
  */
int main(void) {
  int num1, num2;   // 입력받은 두 수
  int i;            // 반복문을 위한 변수 

  printf("2개의 숫자를 입력 ");
  scanf("%d %d", &num1, &num2);

  for(i=1; i<=100; i++){
    if(i % num1 == 0 && i % num2 != 0) printf("%d\n", i);
    else if(i % num2 == 0 && i % num1 != 0) printf("%d\n", i);
  }
  return 0;
}