#include <stdio.h>
/*
  1. 1부터 100사이의 숫자를 입력하시오.
  2. 무한 반복
    2-1. count번째 숫자를 입력받는다.
    2-2. count++
    2-3. count-1까지 반복
      2-3-1. 입력받은 숫자와 같은 숫자가 배열에 있는지 확인
        2-3-1-1. 있으면 잘못 입력했다고 출력
        2-3-1-2. count--
    2-4. count > 10이면 종료
  3. 10번 반복
    3-1. 배열에 저장된 숫자를 출력 
*/
int main(void) {
  int number[10];     // 사용자가 입력한 숫자 10개
  int count=0;          // 현재까지 입력된 숫자의 갯수(0~10)
  int i;              // 반복문을 위한 변수 
  
  printf("1부터 100사이의 숫자를 입력하시오.\n");
  while(1){
    printf("%d번째 숫자를 입력하시오. ", count+1);
    scanf("%d", &number[count]);
    count++;
    for(i=0; i<count-1; i++){
      if(number[count-1] == number[i]){
        printf("잘못 입력하였습니다. 다시 입력하세요.\n");
        count--;
        break;
      }
    }
    if(count == 10) break;
  }

  for(i=0; i<10; i++){
    printf("%d번째 숫자는 %d입니다.\n", i+1, number[i]);
  }
  return 0; 
}
