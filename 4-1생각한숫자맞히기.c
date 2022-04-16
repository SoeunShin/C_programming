#include<stdio.h>
/*
  1. 무한 반복
    1-1. 숫자를 물어본다. (50부터 시작)
    1-2. 더 크면 
      1-2-1. 숫자에 size(25부터 시작)를 더한다.
      1-2-2. cnt++
    1-3. 더 작으면
      1-3-1. 숫자에 size(25부터 시작)를 뺀다.
      1-3-2. cnt++
    1-4. 맞으면
      1-4-1. cnt++
      1-4-2. 종료 
    1-5. size = (size + 1) / 2로 조정 
    1-6. 숫자가 1보다 작으면 1로 설정
    1-7. 숫자가 100보다 크면 100으로 설정 
  2. 시도한 횟수를 출력 
*/
int main(void) {
  int guess = 50;
  int what;
  int size = 25, cnt = 0;
  
	while(1){
    printf("How about %d? (try more : 1, try less : 2, right : 0) ", guess);
    scanf("%d", &what);

    if(what == 1){
      guess += size;
      cnt++;
    }
    else if(what == 2){
      guess -= size;
      cnt++;
    }
    else if(what == 0){
      cnt++;
      break;
    }
    size = (size+1)/2;
    if(guess < 1) guess = 1;
    if(guess > 100) guess = 100;
  }
  printf("%d tried.\n", cnt);
	return 0;
}