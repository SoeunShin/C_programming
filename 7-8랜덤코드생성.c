#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  1. 10번 반복 // 코드 생성 
    1-1. 3번 반복
      1-1-1. 랜덤 알파벳을 만들어 code에 넣음 (index 0~2)
    1-2. code에 -을 넣음 (index 3)
    1-3. 6번 반복 
      1-3-1. 랜덤 숫자를 만들어 code에 넣음 (index 4~9)
    1-4. code에 '\0'을 넣음 (index 10)
  2. 10개의 코드가 생성되었습니다.
  3. 10번 반복 // 코드 출력 
*/
int main(void) {
	srand(time(0));
	char code[10][20];
  int i, j;
  for(i=0; i<10; i++){
    for(j=0; j<3; j++){
      code[i][j] = 'A' + rand()%26;
    }
    code[i][3] = '-';
    for(j=4; j<10; j++){
      code[i][j] = '0' + rand()%10;
    }
    code[i][10] = '\0';
  }

  printf("10개의 코드가 생성되었습니다.\n");
  for(i=0; i<10; i++){
    printf("Code #%d : %s\n", i+1, code[i]);
  }
	return 0;
}

