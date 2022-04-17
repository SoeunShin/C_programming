#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 사용할 코인의 개수 입력받음
  2. 무한 반복
    2-2. 코인의 개수가 1보다 작으면
      2-2-1. 종료
    2-3. 게임 cnt회 start
    2-4. 아무 숫자나 입력받음
    2-5. 랜덤 숫자 3개 생성 후 출력 
    2-6. 숫자가 몇 개 일치하는지 출력
    2-7. 2개가 같으면 -> 코인 + 2개, 숫자 2개 일치... 코인 2개 증정 
         3개가 같으면 -> 코인 + 4개, 숫자 3개 일치... 코인 4개 증정 
         다 다르면 -> 꽝입니다... 아쉽군요 
    2-8. 코인--
    2-9. cnt++
    2-10. 남아있는 코인 개수 출력
  3. 게임 종료!! 출력 
*/
int main(void) {
  int coins;      // 사용자의 코인 수. (최초에 입력받음)
  int number[3];  // 랜덤하게 만들어진 슬롯머신의 숫자 3개 
  int dummy;      // 게임스타트를 위한 의미 없는 입력 숫자 
  int i;          // 반복문을 위한 변수
  int cnt = 1;
  
  srand(time(0)); 
  printf("사용하실 코인의 개수를 입력하세요. ");
  scanf("%d", &coins);
  while(1){
    if(coins < 1) break;
    printf("게임 %d회 Start!!! (아무 숫자나 입력하세요) ", cnt);
    scanf("%d", &dummy);

    printf("게임 결과 : ");
    for(i=0; i<3; i++){
      number[i] = rand()%9+1;
      printf("%d ", number[i]);
    }
    if(((number[0]==number[1])&&(number[1]!=number[2])) || ((number[0]==number[2])&&(number[1]!=number[2])) || ((number[1]==number[2])&&(number[0]!=number[2]))){
      printf("---> 숫자 2개 일치... 코인 2개 증정\n");
      coins += 2;
    }
    else if(number[0]==number[1] && number[1]==number[2]){ // 세 개 다 같으면
      printf("---> 숫자 3개 일치... 코인 4개 증정\n");
      coins += 4;
    }
    else{
      printf("----> 꽝입니다... 아쉽군요\n");
    }
    coins--;
    cnt++;
    printf("남아있는 코인은 %d개입니다.\n", coins);
  }
  printf("\n게임 종료!!\n");
  return 0;
}