#include <stdio.h>
/*
  1. 숫자 물어보고 입력받기
  2. 1 이하일 때: "잘못 입력하였습니다."출력
  3. 아닐 때: 
    3-1. 1부터 숫자까지 반복문
      3-1-1. totalsum에 숫자 더함
    3. 결과 출력
*/
int main(void) {
  int number;       // 입력받은 수 
  int totalsum = 0;     // 1부터 더한 계산 결과 값 
  int i;            // 반복문 사용을 위한 변수 
  
  printf("숫자를 입력하세요. ");
  scanf("%d", &number);

  if(number <= 1) printf("잘못 입력하였습니다.\n");
  else{
    for(i=1; i<=number; i++){
      totalsum += i;
    }
    printf("1부터 입력한 숫자까지의 모든 정수를 더한 값은 %d 입니다.\n", totalsum);
  }
  return 0;
}