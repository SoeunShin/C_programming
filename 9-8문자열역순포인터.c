#include <stdio.h>
#include <string.h>
/*
  1. 문자열 물어보고 입력받음
  2. 함수 호출
  3. 문자열 출력

함수
  1. left 포인터 변수에 문자열의 첫 번째 글자의 주소를 저장 
  2. right 포인터 변수에 문자열의 맨 마지막 글자의 주소를 저장 -> str + strlen(str) - 1
  3. (문자열 길이/2)만큼 반복
    3-1. tmp에 *left를 저장
    3-2. *left에 *right를 저장
    3-3. *right에 tmp를 저장 
    3-4. left는 다음 글자의 주소를 가리키고, right는 이전 글자의 주소를 가리킨다.
*/
void reverseString(char* str); 

int main(void) {
  char str[100];
  printf("문자열 입력 ");
  fgets(str, 100, stdin);
  str[strlen(str)-1] = '\0';

  reverseString(str);
  printf("역순으로 변환한 문자열은 %s\n", str);
  return 0;
}

void reverseString(char* str){
  char* left;
  char* right;

  left = str;
  right = str + strlen(str) - 1;

  for(int i=0; i<strlen(str)/2; i++){
    char tmp;
    tmp = *left;
    *left = *right;
    *right = tmp;
    left++, right--;
  }
}