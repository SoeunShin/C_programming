#include <stdio.h>
/*
  min = 100, max = 0으로 초기화 
  1. 무한 반복
    1-1. 0부터 100 사이 숫자 물어보고 입력받기
    1-2. 0부터 100 사이가 아닌 숫자이면: 종료
    1-3. 맞으면: 
      1-3-1. min보다 작으면 min 값을 수정
      1-3-2. max보다 크면 max 값을 수정 
  2. 결과 출력 
*/
int main(void) {
  int number;             // 입력받은 수 
  int max_num = 0, min_num = 100;   // 가장 큰 숫자, 가장 작은 숫자 

  while(1){
    printf("0부터 100 사이의 숫자를 입력 ");
    scanf("%d", &number);

    if(number < 0 || number > 100) break;
    else{
      if(number < min_num) min_num = number;
      if(number > max_num) max_num = number;
    }
  }
  printf("입력된 숫자들 중 가장 큰수는 %d이고,\n가장 작은 수는 %d입니다.\n", max_num, min_num);
  
  return 0;
}