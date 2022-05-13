#include <stdio.h>
/*
  1. 첫 번째 문자열 물어보고 입력받기
  2. 두 번째 문자열 물어보고 입력받기
  3. 함수 호출하여 변수에 리턴값 저장
  4. 리턴값이 1이면
    4-1. 첫 번째 문자열이 먼저 나옴
  5. 리턴값이 2이면
    5-1. 두 번째 문자열이 먼저 나옴

함수
  1. 무한 반복
    1-1. 두 포인터의 첫 번째 문자를 각각 ch1, ch2에 저장
    1-2. 그 문자가 대문자이면
      1-2-1. 소문자로 변환
    1-3. ch1 > ch2 이면
      1-3-1. 두 번째 문자열이 먼저 나옴 (리턴할 변수에 2 저장)
      1-3-2. 종료
    1-4. ch1 < ch2 이면
      1-4-1. 첫 번째 문자열이 먼저 나옴 (리턴할 변수에 1 저장)
      1-4-2. 종료
    1-5. ch1 == ch2 이면
      1-5-1. 다음 문자로 넘어감
  2. 결과 리턴 
*/

int which_first(char * str1, char * str2);

int main(void) {
  int order;
  char str1[20], str2[20];
  printf("첫번째 문자열을 입력하시오. -->");
  scanf("%s", str1);
  printf("두번째 문자열을 입력하시오. -->");
  scanf("%s", str2);

  order = which_first(str1, str2);
  if(order == 1)
    printf("첫번째 문자열이 사전에 먼저 나옵니다.\n");
  else
    printf("두번째 문자열이 사전에 먼저 나옵니다.\n");
  return 0;
}

int which_first(char * str1, char * str2){
  int first;
  char ch1, ch2;
  while(1){
    ch1 = *str1;
    ch2 = *str2;
    
    // 대문자 -> 소문자로 변환
    if(ch1 >= 'A' && ch2 <= 'Z')
      ch1 = ch1 - 'A' + 'a';
    if(ch2 >= 'A' && ch2 <= 'Z')
      ch2 = ch2 - 'A' + 'a';

    // 한 글자씩 비교 
    if(ch1 < ch2){ // 두 번째 문자의 알파벳 순서가 더 늦을 때
      first = 1; // 첫 번째 문자열이 더 먼저 나옴 
      break;
    }
    else if(ch1 > ch2){ // 첫 번째 문자의 알파벳 순서가 더 늦을 때
      first = 2; // 두 번째 문자열이 더 먼저 나옴 
      break;
    }
    else{
      str1++, str2++; // 다음 문자로 이동 
    }
  }
  return first; // 1 또는 2 리턴 
}