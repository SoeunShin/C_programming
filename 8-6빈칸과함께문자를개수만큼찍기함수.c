#include <stdio.h>
/*
  함수
  1. a = 1로 둔다.
  2. b = blanks+size-1로 둔다.
  3. size만큼 반복
    3-1. b만큼 반복
      3-1-1. " " 출력
    3-2. b--
    3-3. a만큼 반복 
      3-3-1. 문자 출력 
    3-4. a++
    3-5. 개행 
*/
// 이곳에 함수 원형을 넣는다.
void PrintCharWithBlank(int blanks, int size, char ch);
int main(void) {
	char ch;
	int height, blank;
	
	printf("사용할 문자? ");
	scanf("%c", &ch);
	printf("높이와 여백의 크기? ");
	scanf("%d %d", &height, &blank);

  if(height < 0){
    printf("잘못 입력하셨습니다.\n");
    return 0;
  } 
	
	PrintCharWithBlank(blank, height, ch);
	
	return 0;
}

// 이곳에 함수를 구현한 코드를 넣는다.
void PrintCharWithBlank(int blanks, int size, char ch){
  int a = 1;
  int b = blanks + size - 1;
  for(int i=0; i<size; i++){
    for(int j=0; j<b; j++){
      printf(" ");
    }
    b--;
    for(int j=0; j<a; j++){
      printf("%c", ch);
    }
    a++;
    printf("\n");
  }
}