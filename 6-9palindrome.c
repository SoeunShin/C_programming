#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
  1. fgets로 문자열을 입력받음
  2. 마지막 문자는 '\0'로 바꿔줌
  3. 문자열 길이만큼 반복
    3-1. 해당 문자가 알파벳이면
      3-1-1. 해당 문자가 대문자이면 
        3-1-1-1. 소문자로 만들어 alpha의 현재 인덱스에 넣음 
      3-1-2. 대문자가 아니면
        3-1-2-1. alpha의 현재 인덱스에 넣음 
      3-1-3. 인덱스++
  4. 문자열의 길이/2만큼 반복
    4-1. 대칭인 알파벳이 서로 다르면
      4-1-1. pal=1 체크 후 종료
  5. pal=1이면 
    5-1. palindrome 아님 출력
  6. 아니면
    6-1. palindrome 출력 

*/
int main(void) {
  char str[50];
  char alpha[50] = "";
  int cnt=0;
  int i;
  int pal = 0;
  
  printf("Sentence > ");
  fgets(str, 50, stdin);
  str[strlen(str)-1] = '\0';

  for(i=0; i<strlen(str); i++){
    if(isalpha(str[i])){
      if(isupper(str[i]))
        alpha[cnt] = str[i]-'A'+'a';
      else
        alpha[cnt] = str[i];
      cnt++;
    }
  }

  for(i=0; i<strlen(alpha)/2; i++){
    if(alpha[i] != alpha[strlen(alpha)-1-i]){
      pal = 1;
      break;
    }
  }

  if(pal == 1)
    printf("Not Palindrome!\n");
  else 
    printf("Palindrome!\n");
  return 0;
}