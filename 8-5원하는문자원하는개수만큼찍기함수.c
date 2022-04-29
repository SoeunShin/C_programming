#include <stdio.h>
/*
  1. 사용할 문자 입력받음
  2. 숫자 10개 입력받음
  3. 10번 반복
    3-1. 함수에 문자와 숫자를 파라미터로 넣어 호출
----------------------------------
함수
  1. size만큼 반복
    1-1. 입력받은 문자 출력
  2. 개행 
*/
void PrintChar(int size, char ch);
int main(void) {
  char ch;
  int size[10];
  
  printf("사용할 문자? ");
  scanf("%c", &ch);
  printf("숫자 10개? ");
  scanf("%d %d %d %d %d %d %d %d %d %d", &size[0], &size[1], &size[2], &size[3], &size[4], &size[5], &size[6], &size[7], &size[8], &size[9]);

  for(int i=0; i<10; i++){
    PrintChar(size[i], ch);
  }
  return 0;
}

void PrintChar(int size, char ch){
  for(int i=0; i<size; i++){
    printf("%c", ch);
  }
  printf("\n");
}