#include <stdio.h>
/*
  1. 무한 반복
    1-1. 가로 크기와 세로 크기 물어보고 입력받기
    1-2. 가로 크기와 세로 크기 중 0 이하의 값이 입력되면 종료
    1-3. 가로 == 세로 -> 정사각형++
         가로 > 세로 -> 가로형 직사각형++
         가로 < 세로 -> 세로형 직사각형++
  2. 종류별 개수 출력
*/
int main(void) {
  int width, height; // 가로크기, 세로크기
  int count1 = 0; // "정사각형"의 개수
  int count2 = 0; // "가로형 직사각형"의 개수 
  int count3 = 0; // "세로형 직사각형"의 개수 

  while(1){
    printf("직사각형의 가로 크기와 세로 크기를 입력하시오. : ");
    scanf("%d %d", &width, &height);

    if(width <= 0 || height <= 0) break;
    if(width == height) count1++;
    else if(width > height) count2++;
    else count3++;
  }
  printf("\"정사각형\"의 개수는 %d 입니다.\n", count1);
  printf("\"가로형 직사각형\"의 개수는 %d 입니다.\n", count2);
  printf("\"세로형 직사각형\"의 개수는 %d 입니다.\n", count3);
  
  return 0;
}