#include <stdio.h>
/*
  1. height를 물어보고 입력받기
  2. 0부터 height까지 큰 반복문 -> 줄 수
    2-1. 0부터 height-i-1까지 작은 반복문 -> " " 출력
      2-1-1. " " 출력
    2-2. 0부터 i*2+1까지 작은 반복문 -> "*" 출력
      2-2-1. "*" 출력
    2-3. 줄 바꿈
*/
int main(void) {
  int height;   // 입력받은 높이
  int i, j;     // 반복문 사용을 위한 변수 
  
	printf("height? ");
  scanf("%d", &height);

  for(i=0; i<height; i++){
    for(j=0; j<height-i-1; j++){
      printf(" ");
    }
    for(j=0; j<i*2+1; j++){
      printf("*");
    }
    printf("\n");
  }
	return 0;
}