#include <stdio.h>
/*
  1. height를 물어보고 입력받기
  2. blank를 물어보고 입력받기
  3. 0부터 height까지 큰 반복 -> 줄 수
    3-1. blank의 처음 개수는 blank + height + 1로 설정 -> 첫 줄의 blank수
    3-2. 0부터 blank까지 작은 반복 -> " "를 위한 반복
      3-2-1. " " 출력
    3-3. 0부터 i+1까지 작은 반복 -> "*"을 위한 반복
      3-3-1. "*" 출력
    3-4. blank의 개수를 1 감소
    3-5. 줄 바꿈
*/
int main(void) {
  int height;     // 입력받은 높이
  int blank;      // 입력받은 여백 크기
  int i, j;       // 반복문 사용을 위한 변수 
  
  printf("height? ");
  scanf("%d", &height);
  printf("blank? ");
  scanf("%d", &blank);

  blank = blank + height - 1;
  for(i=0; i<height; i++){
    for(j=0; j<blank; j++){
      printf(" ");
    }
    for(j=0; j<i+1; j++){
      printf("*");
    }
    blank--;
    printf("\n");
  }
  return 0;
}