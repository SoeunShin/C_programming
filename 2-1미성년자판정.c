#include <stdio.h>

int main(void) {
  int birth_year;  // 태어난 년도
  int age;         // 나이 
  
  printf("Birth year? ");
  scanf("%d", &birth_year);

  age = 2022 - birth_year + 1;

  if(age < 20)
    printf("미성년자입니다.\n");
  else
    printf("미성년자가 아닙니다.\n");

  return 0;
}