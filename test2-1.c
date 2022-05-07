#include <stdio.h>
// 이 곳에 생각 정리
/*
  1. 크기를 입력받는다.
  2. size만큼 큰 반복
    2-1. 0부터 시작해서 하나씩 증가하며 " " 출력
    2-2. * 하나 출력
    2-3. (size-1)*2부터 시작해서 2개씩 감소하며 " " 출력
    2-4. * 하나 출력하고 \n
  3. size만큼 큰 반복
    3-1. size*2만큼 * 출력
    3-1. \n
  4. size만큼 큰 반복
    4-1. 0부터 하나씩 증가하며 " " 출력
    4-2. size*2부터 2개씩 감소하며 * 출력
    4-3. \n
  5. size*2만큼 * 출력
  6. \n
*/
int main(void) {
	int size; // 크기
	int stars, blank1, blank2; // 별의 갯수, 빈칸1의 갯수, 빈칸2의 갯수
	printf("size? > ");
	scanf("%d", &size);

// 이 곳에 코드 작성
	int i, j;

  blank1 = 0;
  blank2 = (size-1)*2;
  for(i=0; i<size; i++){
    for(j=0; j<blank1; j++){
      printf(" ");
    }
    printf("*");
    blank1++;
    for(j=0; j<blank2; j++){
      printf(" ");
    }
    printf("*\n");
    blank2 -= 2;
  }

  stars = size*2;
  for(i=0; i<size; i++){
    for(j=0; j<stars; j++){
      printf("*");
    }
    printf("\n");
  }

  blank1 = 0;
  stars = size*2;
  for(i=0; i<size; i++){
    for(j=0; j<blank1; j++){
      printf(" ");
    }
    blank1++;
    for(j=0; j<stars; j++){
      printf("*");
    }
    printf("\n");
    stars -= 2;
  }

  stars = size*2;
  for(i=0; i<stars; i++){
    printf("*");
  }
  printf("\n");
	return 0;
}
