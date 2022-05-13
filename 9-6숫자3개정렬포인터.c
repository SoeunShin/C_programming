#include <stdio.h>
/*
  함수
  1. n1 > n3 && n3 > n2 
  -> 1-3-2
  2. n2 > n1 && n1 > n3
  -> 2-1-3
  3. n2 > n3 && n3 > n1
  -> 2-3-1
  4. n3 > n1 && n1 > n2
  -> 3-1-2
  5. n3 > n2 && n2 > n1
  -> 3-2-1
*/
void sort3Num(int* n1, int* n2, int* n3);

int main(void) {
  int num1, num2, num3;
  printf("숫자 3개 입력 ");
  scanf("%d %d %d", &num1, &num2, &num3); 
  sort3Num(&num1, &num2, &num3);
  printf("정렬 결과 %d %d %d\n", num1, num2, num3); 
  return 0;
}

void sort3Num(int* n1, int* n2, int* n3){
  int first, second, third;
  if(*n1 >= *n3 && *n3 >= *n2){
    first = *n1;
    second = *n3;
    third = *n2;
  }
  else if(*n2 >= *n1 && *n1 >= *n3){
    first = *n2;
    second = *n1;
    third = *n3;
  }
  else if(*n2 >= *n3 && *n3 >= *n1){
    first = *n2;
    second = *n3;
    third = *n1;
  }
  else if(*n3 >= *n1 && *n1 >= *n2){
    first = *n3;
    second = *n1;
    third = *n2;
  }
  else if(*n3 >= *n2 && *n2 >= *n1){
    first = *n3;
    second = *n2;
    third = *n1;
  }
  else {
    first = *n1;
    second = *n2;
    third = *n3;
  }
  *n1 = first;
  *n2 = second;
  *n3 = third;
}