#include <stdio.h>
/*
  1. 무한반복
    1-1. 출력하고 싶은 구구단의 단 수 물어보고 입력받기
    2-1. 2~9 사이가 아니면: "잘못 입력받았습니다" 출력
    2-2 맞으면:
      2-2-1. 1부터 9까지 반복문 -> i
        2-2-1-1. 단 * i = 단 * i 출력
*/
int main(void) {
  int dan;    // 출력하려는 구구단의 단 수 
  int i;      // 반복문을 위한 변수 

  while(1){
    printf("출력하고 싶은 구구단의 단 수?(2~9) ");
    scanf("%d", &dan);
    
    if(dan < 2 || dan > 9) printf("잘못 입력하였습니다.\n");
    else{
      for(i=1; i<=9; i++){
        printf("%d x %d = %d\n", dan, i, dan*i);
      }
      break;
    }
  }
  return 0;
}