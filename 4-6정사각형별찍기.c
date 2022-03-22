#include <stdio.h>
/*
  1. 정사각형의 크기 물어보고 입력받기
  2. 크기만큼 큰 반복문 -> i
    2-1. 크기만큼 작은 반복문 -> j
      2-1-1. "#" 출력
    2-2. "\n" 출력
*/
int main(void) {
  int length;
  int i, j;

  printf("정사각형의 크기를 입력하시오. ");
  scanf("%d", &length);

  for(i=0; i<length; i++){
    for(j=0; j<length; j++){
      printf("#");
    }
    printf("\n");
  }
  
  return 0;
}