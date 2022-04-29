#include <stdio.h>
/*
  maxOfTen
  1. max를 0으로 초기화
  2. 10번 반복
    2-1. 배열의 숫자가 max보다 크면
      2-1-1. max값 변경
  3. max를 리턴 

  minOfTen
  1. min을 10000000으로 초기화
  2. 10번 반복
    2-1. 배열의 숫자가 min보다 작으면
      2-1-1. min값 변경
  3. min을 리턴 
*/
int maxOfTen(int number[10]);
int minOfTen(int number[10]);
int main(void) {
	int number[10] = {0};
	int i;
	int max, min;

	for(i = 0; i < 10; i++){
    printf("%d번째 숫자를 입력하시오. ", i+1);
    scanf("%d", &number[i]);
  }

  max = maxOfTen(number);
  min = minOfTen(number);

  printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", max, min);
  return 0;
}

int maxOfTen(int number[10]){
  int max = 0;
  for(int i=0; i<10; i++){
    if(number[i] > max)
      max = number[i];
  }
  return max;
}

int minOfTen(int number[10]){
  int min = 10000000;
  for(int i=0; i<10; i++){
    if(number[i] < min)
      min = number[i];
  }
  return min;
}