#include <stdio.h>

int markBingo(int num, int b[5][5]);
/*파라미터 : 선택된 칸번호(num), 빙고매트릭스(b)
  리턴값 : 이미 마크되어 있었음 0, 마크 안되어 마크함 1 
  수행내용 : 현재의 빙고매트릭스에 선택된 칸번호에 해당되는 칸 검사한 후 마크함
*/

void printBingo(int b[5][5]);
/*파라미터 : 빙고매트릭스(b)
  리턴값 : 없음 
  수행내용 : 현재의 빙고매트릭스 내용 표현
*/

int main(void) {
	int bingo[5][5]={0}; // 빙고용 매트릭스
  int num, mark;
  while(1){
    printf("Enter a number(1~25) > ");
    scanf("%d", &num);
    if(num<1 || num>25){ // 프로그램 종료
      printf("EXIT!\n");
      break;
    }
    mark = markBingo(num, bingo);
    if(mark == 0) // 이미 마크되어 있었음
      printf("중복!\n");
  }
  printBingo(bingo);
}

int markBingo(int num, int b[5][5]){
  int i = (num-1)/5;
  int j = (num-1)%5;

  if(b[i][j] == 0){
    b[i][j] = 1;
    return 1;
  }
  else return 0;
}

void printBingo(int b[5][5]){
  printf("BINGO MATRIX\n");
  printf("---------------------\n");
  for(int i=0; i<5; i++){
    printf("|");
    for(int j=0; j<5; j++){
      printf(" %d |", b[i][j]);
    }
    printf("\n");
  }
  printf("---------------------\n");
}