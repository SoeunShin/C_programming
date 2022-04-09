#include <stdio.h>
/*
  1. 생년원일을 입력받음
  2. index 0~3에 해당하는 연도의 각 숫자들을 sum에 더함 
  3. index 4에 해당하는 숫자*10을 sum에 더함
  4. index 5에 해당하는 숫자를 sum에 더함
  5. index 6에 해당하는 숫자*10을 sum에 더함
  6. index 7에 해당하는 숫자를 sum에 더함
*/
int main(void) {
  char birthdate[8];
  int sum = 0;
  printf("Enter your birthdate >> ");
  scanf("%s", birthdate);

  for(int i=0; i<4; i++){ // 연도 더하기 
    sum += birthdate[i] - '0';
  }
  sum += ((birthdate[4]-'0')*10 + (birthdate[5]-'0')); // 월 더하기
  sum += ((birthdate[6]-'0')*10 + (birthdate[7]-'0')); // 일 더하기 
  printf("Your birthdate number is %d.\n", sum);
  return 0;
}