#include <stdio.h>
/*
  1. a, b, c 물어보고 입력받기
  2. x좌표 시작 값과 끝 값 물어보고 입력받기
  3. x좌표 시작 값부터 끝 값까지 반복 -> x로 둔다.
    3-1. y = ax^2 + bx + c 계산
    3-2. 좌표 (x,y) 출력
 */
int main(void) {
  int a, b, c;          // 2차 함수의 계수 a, b, c
  int x_begin, x_end;   // x좌표의 시작 값과 끝 값 
  int x, y;             // x좌표, y좌표 
  
  printf("2차 함수의 계수 a와 b와 c를 입력 ");
  scanf("%d %d %d", &a, &b, &c);
  printf("x좌표의 시작 값과 끝 값을 입력 ");
  scanf("%d %d", &x_begin, &x_end);

  for(x=x_begin; x<=x_end; x++){
    y = a*x*x + b*x + c;
    printf("좌표 (%d,%d)\n", x, y);
  }
  return 0;
}
