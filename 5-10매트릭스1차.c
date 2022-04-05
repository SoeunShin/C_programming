#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 무한 반복
    1-1. 사용자에게 숫자를 물어보고 입력받음
    1-2. 1부터 25 사이의 숫자가 아니면 EXIT! 출력 후 break
    1-3. count만큼 반복
      1-3-1. 이미 배열에 있는 값과 같으면
        1-3-1-1. 중복! 출력하고 cnt--
    1-4. 숫자가 1~5 사이 --> [0][num-1] 자리를 1로 바꿈
    1-5. 숫자가 6~10 사이 --> [1][num-6] 자리를 1로 바꿈
    1-6. 숫자가 11~15 사이 --> [2][num-11] 자리를 1로 바꿈
    1-7. 숫자가 16~20 사이 --> [3][num-16] 자리를 1로 바꿈
    1-8. 숫자가 21~25 사이 --> [4][num-21] 자리를 1로 바꿈
    1-9. cnt++
  2. 매트릭스 출력 
*/
int main(void) {
  int bingo[5][5]={0}; // 5*5 매트릭스
  int cnt = 0;
  int i, j;
  int num[25];
  
  while(1){
    printf("Enter a number(1~25) > ");
    scanf("%d", &num[cnt]);
    
    if(num[cnt] > 25 || num[cnt] < 1){
      printf("EXIT!\n");
      break;
    }
    for(i=0; i<cnt; i++){
      if(num[i] == num[cnt]){
        printf("중복!\n");
        cnt--;
      }
    }
    if(num[cnt]>=1 && num[cnt]<=5)
      bingo[0][num[cnt]-1] = 1;
    if(num[cnt]>=6 && num[cnt]<=10)
      bingo[1][num[cnt]-6] = 1;
    if(num[cnt]>=11 && num[cnt]<=15)
      bingo[2][num[cnt]-11] = 1;
    if(num[cnt]>=16 && num[cnt]<=20)
      bingo[3][num[cnt]-16] = 1;
    else
      bingo[4][num[cnt]-21] = 1;
    cnt++;
  }
  printf("매트릭스의 내용은 다음과 같습니다.\n");
  printf("---------------------\n");
  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      printf("| %d ", bingo[i][j]);
    }
    printf("|\n");
    printf("---------------------\n");
  }

	return 0;
}