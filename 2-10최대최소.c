#include <stdio.h>

int main(void) {
  int num1, num2, num3;   // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자 
  int max_num, min_num;   // 가장 큰 숫자, 가장 작은 숫자
  
  printf("첫번째 숫자? ");
  scanf("%d", &num1);
  printf("두번째 숫자? ");
  scanf("%d", &num2);
  printf("세번째 숫자? ");
  scanf("%d", &num3);

  // 1-2-3
  // 1-3-2
  // 2-1-3
  // 2-3-1
  // 3-1-2
  // 3-2-1
  if(num1 >= num2 && num2 >= num3) printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num1, num3);
  else if(num1 >= num3 && num3 >= num2) printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num1, num2);
  else if(num2 >= num1 && num1 >= num3) printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num2, num3);
  else if(num2 >= num3 && num3 >= num1) printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num2, num1);
  else if(num3 >= num1 && num1 >= num2) printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num3, num2);
  else printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", num3, num1);
  return 0;
}