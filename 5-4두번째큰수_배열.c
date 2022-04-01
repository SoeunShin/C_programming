#include <stdio.h>
/*
  1. 10번 반복
    1-1. 숫자 물어보고 입력받기 
    1-2. 입력받은 수가 first보다 크면 first를 수정
  2. 10번 반복
    2-1. 입력받은 수가 first보다 작고 second보다 크면 second 수정, index 저장
  3. 두번째로 큰 수의 index, 숫자 출력
*/
int main(void) {
  int num[10];             // 10개의 숫자
  int first = 0;               // 첫 번째로 큰 수
  int second = 0;              // 두 번째로 큰 수
  int second_max_index;    // 두 번째로 큰 수의 인덱스 
  int i;                   // 반복문을 위한 변수

  for(i=0; i<10; i++){
    printf("%d번째 수를 입력하시오. ", i+1);
    scanf("%d", &num[i]);
    if(num[i] > first) first = num[i];
  }
  for(i=0; i<10; i++){
    if(num[i] < first && num[i] > second){
      second_max_index = i+1;
      second = num[i];
    }
  }
  printf("두번째로 큰 수는 %d번째 수 %d입니다.\n", second_max_index, second);
  return 0;
} 
