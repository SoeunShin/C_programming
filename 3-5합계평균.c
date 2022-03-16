#include <stdio.h>
/*
  1. 무한 반복
    1-1. 0 초과의 숫자 물어보고 입력받기
    1-2. 0 이하의 숫자가 입력되면 종료
    1-3. 합계에 입력받은 숫자 더하기
    1-4. 개수 1 증가
  2. 평균 계산 -> 합계 / 개수
  3. 입력받은 숫자의 개수, 합계,  평균값 출력
*/
int main(void) {
  int number;     // 입력받은 수
  int count = 0;      // 입력받은 숫자의 개수
  int totalsum = 0;   // 합계
  float average = 0.0;  // 평균 값 

  while(1){
    printf("0초과의 숫자를 입력하세요 ");
    scanf("%d", &number);

    if(number <= 0) break;
    totalsum += number;
    count++;
  }
  if(count > 0) average = (float) totalsum / count;
  printf("입력한 %d개의 숫자들의 총합계는 %d이고, 평균 값은 %.1f 입니다.\n", count, totalsum, average);
  
  return 0;
}