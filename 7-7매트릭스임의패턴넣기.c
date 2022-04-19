#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
  1. size를 입력받음
  2. cnt<size인 동안 반복 
    2-1. i를 0~9 사이 숫자로 랜덤 생성 
    2-2. j를 0~9 사이 숫자로 랜덤 생성 
    2-3. arr[i][j]가 0이면
      2-3-1. 1로 바꾼다.
      2-3-2. cnt++
  3. 10번 큰 반복
    3-1. 10번 작은 반복
      3-1-1. arr[i][j]가 0이면
        3-1-1-1. + 출력 
      3-1-2. 1이면  
        3-1-2-1. @ 출력 
    3-2. \n
*/
int main(void) {
  int size;
  int cnt = 0;
  int arr[10][10] = {0};
  int i, j;
  
  printf("Enter size >> ");
  scanf("%d", &size);

  srand(time(0));
  while(cnt < size){
    i = rand()%9+1;
    j = rand()%9+1;

    if(arr[i][j] == 0){
      arr[i][j] = 1;
      cnt++;
    }
  }

  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      if(arr[i][j] == 0)
        printf("+");
      else
        printf("@");
    }
    printf("\n");
  }
  
	return 0;
}