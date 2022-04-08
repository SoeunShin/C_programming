#include <stdio.h>
/*
  1. size 물어보고 입력받기
  2. 제일 첫 줄은 size-1 만큼 blank 출력하고 별 하나 출력 후 \n
  3. 두 번째 줄 부터는 반복문
    3-1. size-2개에서 시작하여 하나씩 줄여가며 blank 출력
    3-2. 별 하나 출력
    3-3. (size/2)-1 줄이 나오면 blank 대신 * 출력 -> 아닐 경우 1에서 시작하여 2개씩 증가시켜 blank 출력
    3-4. 별 하나 찍고 \n
*/ 
int main() {
  int size;
  int i, j;
  
	printf("size? > ");
  scanf("%d", &size);
  if(size < 1) return 0;

  int a=size-2, b=1;

  for(i=0; i<size-1; i++){ // 첫 줄
    printf(" ");
  }
  printf("*\n");

  for(i=0; i<size-1; i++){
    for(j=0; j<a; j++){
      printf(" ");
    }
    printf("*");
    a--;
    for(j=0; j<b; j++){
      if(i == ((size/2)-1)) printf("*");
      else printf(" ");
    }
    b+=2;
    printf("*\n");
  }
  
}
