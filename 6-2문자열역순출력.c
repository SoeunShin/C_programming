#include <stdio.h>
#include <string.h>
/*
  1. 문자열 입력받기
  2. 문자열 길이만큼 반복
    2-1. index=문자열 길이-1부터 하나씩 감소하며 문자를 저장 
  3. 역순으로 변환된 문자열 출력 
*/
int main(void) {
  char str[100];      // 입력받은 문자열
  char reverse[100];  // 순서를 거꾸로 바꾼 문자열

  printf("문자열 입력 ");
  fgets(str, 100, stdin);
  str[strlen(str)-1] = '\0';

  int idx = strlen(str)-1;
  for(int i=0; i<strlen(str); i++){
    reverse[idx] = str[i];
    idx--;
  }
  reverse[strlen(str)] = '\0';
  
  printf("역순으로 변환한 문자열은 %s\n", reverse);
  return 0;
}