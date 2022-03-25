#include <stdio.h>
 
int main(void) {
  int mode;     // 출력모드(1: 홀수단, 2: 짝수단) 
  int column;   // 열 개수
  int i, j;     // 반복문 사용을 위한 변수 
  
  printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요. ");
  scanf("%d", &mode);

  printf("한 줄에 출력할 갯수를 입력하세요. ");
  scanf("%d", &column);

  if(mode == 1) i = 3;
  else if(mode == 2) i = 2;
  
  for(; i<=9; i+=2){ // 단
    for(j=1; j<=9; j++){ // 수
      printf("%d X %d = %2d  ", i, j, i*j);
      if(j % column == 0) printf("\n");
    }
    if(column != 1 && column != 3 && column != 9)     
      printf("\n");
    if(i < 8) printf("\n");
  }
  return 0;
}