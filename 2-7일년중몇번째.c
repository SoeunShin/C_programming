#include <stdio.h>

int main(void) {
  int month, day;   // 월, 일
  int day_count;    // 1년 중 날 수 
  
  printf("Month? ");
  scanf("%d", &month);
  printf("Day? ");
  scanf("%d", &day);

  if(month == 1 && day <= 31) day_count = day;
  else if(month == 2 && day <= 28) day_count = day + 31;
  else if(month == 3 && day <= 31) day_count = day + 31 + 28;
  else if(month == 4 && day <= 30) day_count = day + 31 + 28 + 31;
  else if(month == 5 && day <= 31) day_count = day + 31 + 28 + 31 + 30;
  else if(month == 6 && day <= 30) day_count = day + 31 + 28 + 31 + 30 + 31;
  else if(month == 7 && day <= 31) day_count = day + 31 + 28 + 31 + 30 + 31 + 30;
  else if(month == 8 && day <= 31) day_count = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
  else if(month == 9 && day <= 30) day_count = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
  else if(month == 10 && day <= 31) day_count = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
  else if(month == 11 && day <= 30) day_count = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
  else if(month == 12 && day <= 31) day_count = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
  else{
    printf("잘못 입력하셨습니다.\n");
    return 0;
  }
  printf("이 날짜는 1년 중 %d번째 날에 해당됩니다.\n", day_count);
  return 0;
}