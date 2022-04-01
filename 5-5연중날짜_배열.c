#include <stdio.h>
/*
  1. month 물어보고 입력받기
  2. day 물어보고 입력받기
  3. month가 13보다 크거나, day가 해당 달의 날 수보다 크면 메세지 출력 후 종료
  4. month-1만큼 반복문
    4-1. 반복문이 끝날 때까지 monthdays를 계속 더해줌
  5. day를 더해줌
  6. 결과 출력
*/
int main(void) {
  int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};        // 1~12월의 날 수 
  int month, day;           // 입력받은 월, 일
  int day_count = 0;            // 1년 중 날 수
  int i;                    // 반복문을 위한 변수 
  
  printf("Month? ");
  scanf("%d", &month);
  printf("Day? ");
  scanf("%d", &day);

  if(month > 13 || monthdays[month-1] < day){
    printf("잘못 입력하셨습니다.\n");
    return 0;
  }

  for(i=0; i<month-1; i++){
    day_count += monthdays[i];
  }
  day_count += day;
  printf("이 날짜는 1년 중 %d번째 날에 해당\n", day_count);
  
  return 0;
}