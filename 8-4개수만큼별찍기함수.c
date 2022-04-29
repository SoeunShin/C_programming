#include <stdio.h>
/*
  1. 숫자 10개를 입력받음
  2. 10번 반복
    2-1. 각 숫자를 함수의 파라미터로 넣어 호출
----------------------------
함수
  1. 입력받은 size만큼 반복
    1-1. * 출력
  2. 개행 
*/
void PrintStar(int size);
int main(void) {
  int size[10];
  int i;
  
  printf("숫자 10개를 입력 ");
  scanf("%d %d %d %d %d %d %d %d %d %d", &size[0], &size[1], &size[2], &size[3], &size[4], &size[5], &size[6], &size[7], &size[8], &size[9]);

  for(i=0; i<10; i++){
    PrintStar(size[i]);
  }
  return 0;
}

void PrintStar(int size){
  for(int i=0; i<size; i++){
    printf("*");
  }
  printf("\n");
}