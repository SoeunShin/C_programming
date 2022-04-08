#include <stdio.h>
/*
  1. 사용자에게 크기를 입력받기
  2. size 만큼 큰 반복
    2-1. 1개부터 시작해서 하나씩 증가하며 * 출력
    2-2. size*2-2개부터 시작해서 2개씩 감소하며 빈칸 출력
    2-3. 1부터 시작해서 하나씩 증가하며 * 출력
    2-4. \n 출력 
  3. size-1 만큼 큰 반복
    3-1. size-1부터 시작해서 하나씩 감소하며 * 출력
    3-2. 2부터 시작해서 2개씩 증가하며 빈칸 출력
    3-3. size-1부터 시작해서 하나씩 감소하며 * 출력
    3-4. \n 출력
*/
int main() {
  int size, i, j;
  
  printf("size? >> ");
  scanf("%d", &size);

  int a = 1, b = size*2-2, c = size-1, d = 2;

  for(i=0; i<size; i++){
    for(j=0; j<a; j++){
      printf("*");
    }
    for(j=0; j<b; j++){
      printf(" ");
    }
    b-=2;
    for(j=0; j<a; j++){
      printf("*");
    }
    printf("\n");
    a++;
  }

  for(i=0; i<size-1; i++){
    for(j=0; j<c; j++){
      printf("*");
    }
    for(j=0; j<d; j++){
      printf(" ");
    }
    d+=2;
    for(j=0; j<c; j++){
      printf("*");
    }
    c--;
    printf("\n");
  }
	return 0;
}