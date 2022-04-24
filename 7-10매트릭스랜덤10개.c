#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. count < 10인 동안 반복 
    1-1. 1~25 사이의 번호 생성 
    1-2. 1~5일 때 -> [0][number-1]
         6~10일 때 -> [1][number-6]
         11~15일 때 -> [2][number-11]
         16~20일 때 -> [3][number-16]
         21~25일 때 -> [4][number-21]
         각 칸이 0이면
      1-2-1. 1로 바꾼다.
      1-2-2-. cnt++
  2. 결과 출력
  ---------------------\n
  5번 반복
    "| bingo[0][i] " 출력 
  "|\n" 출력
  ---------------------\n
  5번 반복
    "| bingo[1][i] " 출력
  "|\n" 출력
  ---------------------\n
  5번 반복
    "| bingo[2][i] " 출력 
  "|\n" 출력
  ---------------------\n
  5번 반복
    "| bingo[3][i] " 출력
  "|\n" 출력
  ---------------------\n
  5번 반복
    "| bingo[4][i] " 출력
  "|\n" 출력
  ---------------------\n
*/
int main(void) {
	int bingo[5][5]={0}; // 빙고용 매트릭스
	int number; // 입력받는 행, 열 번호 
  int cnt = 0;
  int i;
  
  srand(time(0));
  while(cnt < 10){
    number = rand()%25+1;
    if(number>=1 && number<=5){
      if(bingo[0][number-1] == 0){
        bingo[0][number-1] = 1;
        cnt++;
      }
    }
    else if(number>=6 && number<=10){
      if(bingo[1][number-6] == 0){
        bingo[1][number-6] = 1;
        cnt++;
      }
    }
    else if(number>=11 && number<=15){
      if(bingo[2][number-11] == 0){
        bingo[2][number-11] = 1;
        cnt++;
      }
    }
    else if(number>=16 && number<=20){
      if(bingo[3][number-16] == 0){
        bingo[3][number-16] = 1;
        cnt++;
      }
    }
    else if(number>=21 && number<=25){
      if(bingo[4][number-21] == 0){
        bingo[4][number-21] = 1;
        cnt++;
      }
    }
  }

  printf("---------------------\n");
  for(i=0; i<5; i++){
    printf("| %d ", bingo[0][i]); 
  }
  printf("|\n");
  
  printf("---------------------\n");
  for(i=0; i<5; i++){
    printf("| %d ", bingo[1][i]); 
  }
  printf("|\n");
  
  printf("---------------------\n");
  for(i=0; i<5; i++){
    printf("| %d ", bingo[2][i]); 
  }
  printf("|\n");
  
  printf("---------------------\n");
  for(i=0; i<5; i++){
    printf("| %d ", bingo[3][i]); 
  }
  printf("|\n");
  
  printf("---------------------\n");
  for(i=0; i<5; i++){
    printf("| %d ", bingo[4][i]); 
  }
  printf("|\n");
  printf("---------------------\n");
  return 0;
}
