#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 무한반복
    1-1. count = 0으로 초기화 
    1-2. count < 6동안 반복
      1-2-1. 랜덤 숫자를 만들어 lotto[count]에 저장 
      1-2-2. count만큼 반복
        1-2-2-1. lotto 배열에 현재 생성된 숫자와 같은 숫자가 있으면
          1-2-2-1-1. count--
        1-2-2-2. count++
    1-3. 6번 반복
      1-3-1. 생성된 번호 출력
    1-4. 더 만드시겠습니까? 물어보고 입력받기
    1-5. 2이면 종료
*/
int main(void) {
  int lotto[6];  // 컴퓨터가 만들어 낸 로또 번호
  int count;     // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
  int onemore;   // 반복여부 입력 (1:Yes, 2:No)
  int i;         // 반복문을 위한 변수

  while(1){
    srand(time(0));
    count = 0;
    while(count < 6){
      lotto[count] = rand()%45+1;
      for(i=0; i<count; i++){
        if(lotto[i] == lotto[count]) // 같은 숫자가 이미 존재 
          count--;
      }
      count++;
    }

    printf("생성된 로또 번호는 ");
    for(i=0; i<6; i++){
      printf("%d ", lotto[i]);
    }
    printf("입니다.\n");

    printf("더 만드시겠습니까? (1:Yes, 2:No) >> ");
    scanf("%d", &onemore);

    if(onemore == 2)
      break;
  }
  return 0;
}