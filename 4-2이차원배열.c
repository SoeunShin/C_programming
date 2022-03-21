#include <stdio.h>
/*
  1. 행의 크기 물어보고 입력받기
  2. 열의 크기 물어보고 입력받기
  3. 큰 반복문으로 i를 1부터 행 크기까지 반복
    3-1. 작은 반복문으로 j를 1부터 열 크기까지 반복
      3-1-1. number = i*j
      3-1-2. number 출력
    3-2. "\n" 출력
*/
int main(void) {
  int rows, columns;  // 행의 개수, 열의 개수
  int number;         // 각 칸에 출력하는 값
  int i, j;           // 반복문 사용을 위한 변수 
  
  printf("rows? ");
  scanf("%d", &rows);
  printf("columns? ");
  scanf("%d", &columns);

  for(int i=1; i<=rows; i++){
    for(int j=1; j<=columns; j++){
      number = i*j;
      printf("%-3d", number);
    }
    printf("\n");
  }
  return 0;
}