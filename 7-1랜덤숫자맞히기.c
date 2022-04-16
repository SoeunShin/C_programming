#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 1부터 100 사이의 랜덤 숫자를 하나 생성
  2. 무한 반복
    2-1. 사용자에게 1부터 100 사이의 숫자 하나를 입력받음
    2-2. 컴퓨터의 숫자가 더 크면
      2-2-1. 좀 더 큰 숫자입니다.라고 출력 
      2-2-2. cnt++
    2-3. 컴퓨터의 숫자가 더 작으면
      2-3-1. 좀 더 작은 숫자입니다.라고 출력
      2-3-2. cnt++
    2-4. 컴퓨터의 숫자와 같으면 
      2-4-1. cnt++
      2-4-2. 종료
  3. 시도 횟수 출력 
*/
int main(void){
  int answer;       // 컴퓨터가 만들어 낸 1부터 100사이의 임의의 숫자
  int number_try;   // 사용자가 제시한 숫자
  int count = 0;        // 사용자가 맞추려고 시도한 횟수

  srand(time(0));
  answer = rand()%100+1;
  while(1){
    printf("1부터 100까지의 숫자 하나를 맞춰보세요 ");
    scanf("%d", &number_try);

    if(answer > number_try){
      printf("좀 더 큰 숫자입니다.\n");
      count++;
    }
    else if(answer < number_try){
      printf("좀 더 작은 숫자입니다.\n");
      count++;
    }
    else{
      count++;
      break;
    }
  }
  printf("%d 번만에 숫자를 맞추셨습니다.\n", count);
  return 0;
}