#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 무한 반복
    1-1. 컴퓨터의 랜덤 숫자 생성
    1-2. 사용자에게 숫자 입력받음 
    1-3. 0이면 종료 
    1-4. com == user 이면 // 비김 
      1-4-1. score[0][1]++ // 컴퓨터 무 
      1-4-2. score[1][1]++ // 사용자 무 
      1-4-3. "컴퓨터: (컴퓨터가 낸 손가락) -> 비김~" 출력
    1-5. (com==1 && user==3) || (com==2 && user==1) || (com==3 && user==2) 이면
      1-5-1. score[0][0]++ // 컴퓨터 승 
      1-5-2. score[1][2]++ // 사용자 패 
      1-5-3. "컴퓨터: (컴퓨터가 낸 손가락) -> 컴퓨터 승!" 출력
    1-6. (com==3 && user==1) || (com==1 && user==2) || (com==2 && user==3) 이면
      1-6-1. score[0][2]++ // 컴퓨터 패 
      1-6-2. score[1][0]++ // 사용자 승
      1-6-3. "컴퓨터: (컴퓨터가 낸 손가락) -> 사용자 승!" 출력
  2. 2번 큰 반복(i)
    3. 3번 작은 반복 (j)
      3-1. i=0이면
        3-1-1. 컴퓨터의 승, 패, 무 횟수 출력
      3-2. i=1이면
        3-2-1. 사용자의 승, 패, 무 횟수 출력 
*/
int main(void) {
  int com_finger;   // 컴퓨터가 낸 가위(1), 바위(2), 보(3)
  int my_finger;    // 사용자가 낸 가위(1), 바위(2), 보(3)
  int score[2][3]={0};  // 결과 횟수 (1행 : 컴퓨터의 승, 무, 패, 2행 : 사용자의 승, 무, 패)
  int i, j;         // 반복문을 위한 변수
  char finger[3][10] = {"가위", "바위", "보"};

  srand(time(0));
  while(1){
    com_finger = rand()%3+1;
    
    printf("가위(1), 바위(2), 보(3)를 입력하세요. ");
    scanf("%d", &my_finger);
    
    if(my_finger == 0) break;

    if(com_finger == my_finger){
      score[0][1]++;
      score[1][1]++;
      printf("컴퓨터: %s -> 비김~\n", finger[com_finger-1]);
    }
    else if((com_finger==1 && my_finger==3) || (com_finger==2 && my_finger==1) || (com_finger==3 && my_finger==2)){
      score[0][0]++;
      score[1][2]++;
      printf("컴퓨터: %s -> 컴퓨터 승!\n", finger[com_finger-1]);
    }
    else if((com_finger==3 && my_finger==1) || (com_finger==1 && my_finger==2) || (com_finger==2 && my_finger==3)){
      score[0][2]++;
      score[1][0]++;
      printf("컴퓨터: %s -> 사용자 승!\n", finger[com_finger-1]);
    }
  }

  for(i=0; i<2; i++){
    if(i==0){
      printf("컴퓨터: 이긴 횟수 %d회, 진 횟수 %d회, 비긴 횟수 %d회\n", score[i][0], score[i][2], score[i][1]);
    }
    else{
      printf("사용자: 이긴 횟수 %d회, 진 횟수 %d회, 비긴 횟수 %d회\n", score[i][0], score[i][2], score[i][1]);
    }
  }
  return 0;
}