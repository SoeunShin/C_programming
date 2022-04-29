#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  main 함수
  1. count = 0으로 초기화 
  2. count < 6 동안 반복 // 컴퓨터의 로또 번호 만들기 
    2-1. lotto_com[count]에 랜덤값 넣기
    2-2. count만큼 반복
      2-2-1. lotto_com에 현재의 숫자와 중복된 값이 있으면
        2-2-1-1. count--
    2-3. count++
  3. count = 0으로 초기화 
  4. count < 6 동안 반복 // 사용자의 로또 번호 입력받기 
    4-1. 원하는 숫자를 입력받아 lotto_user[count]에 넣기 
    4-2. count만큼 반복
      4-2-1. lotto_user에 현재의 숫자와 중복된 값이 있으면
        4-2-1-1. 잘못 입력 
        4-2-1-2. count--
    4-3. count++
  5. 6번 반복
    5-1. 컴퓨터의 로또 번호 하나씩 출력
  6. match_count에 함수 호출하여 리턴받은 값을 넣음
  7. match_count 출력 
------------------------------------------------
함수
1. 6번 큰 반복 
  1-2. 6번 작은 반복
    1-2-1. 컴퓨터의 번호와 사용자의 번호가 같으면
      1-2-1-1. match_count++
2. match_count 리턴 
*/
int matchLotto(int lotto1[6], int lotto2[6]);

int main(void) {
  int lotto_com[6];   // 컴퓨터가 만들어 낸 로또 번호
  int lotto_user[6];  // 사용자가 입력한 로또 번호
  int i;              // 반복문을 위한 변수
  int count = 0;          // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
  int match_count;    // 일치하는 로또 번호의 갯수 (0~6)

  // 컴퓨터 로또 번호 만들기
  srand(time(0));
  while(count < 6){
    lotto_com[count] = rand()%45+1;
    for(i=0; i<count; i++){
      if(lotto_com[i] == lotto_com[count])
        count--;
    }
    count++;
  }
  count = 0;
  // 사용자 로또 번호 만들기 
  while(count < 6){
    printf("원하는 %d번째 로또 숫자를 입력 ", count+1);
    scanf("%d", &lotto_user[count]);

    for(i=0; i<count; i++){
      if(lotto_user[i] == lotto_user[count]){
        printf("-> 잘못 입력\n");
        count--;
      }
    }
    count++;
  }

  count = 0;
  printf("이번 주의 로또 당첨 번호는");
  for(i=0; i<6; i++){
    printf(" %d", lotto_com[i]);
  }
  printf("\n");

  match_count = matchLotto(lotto_com, lotto_user);
  printf("일치하는 로또 번호는 %d\n", match_count);
  
  return 0;
}

int matchLotto(int lotto1[6], int lotto2[6]){
  int match_count = 0;
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      if(lotto1[i] == lotto2[j])
        match_count++;
    }
  }
  return match_count;
}