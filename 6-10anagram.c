#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
  1. str1을 입력받음
  2. str2를 입력받음
  3. str1의 길이만큼 반복
    3-1. 알파벳이면 
      3-1-1. str1의 각 문자에 해당하는 alphacount1의 각 인덱스의 숫자를 ++
  4. str2의 길이만큼 반복
    4-1. 알파벳이면 
      4-1-1. str2의 각 문자에 해당하는 alphacount2의 각 인덱스의 숫자를 ++
  5. 26번 반복
    5-1. alphacount1와 alphacount2의 해당 인덱스의 숫자가 같지 않으면 
      5-1-1. Not anagram! 출력
      5-1-2. 종료
  6. Anagram! 출력 
*/
int main(void){
  int alphacount1[26]={0}, alphacount2[26]={0};
  char str1[50];
  char str2[50];
  int i;
  int idx;
  
  printf("String 1 > ");
  fgets(str1, 50, stdin);
  str1[strlen(str1)-1] = '\0';
  printf("String 2 > ");
  fgets(str2, 50, stdin);
  str2[strlen(str2)-1] = '\0';
  
  for(i=0; i<strlen(str1); i++){
    if(isalpha(str1[i])){
      idx = str1[i] - 'a';
      alphacount1[idx]++;
    }
  }
  for(i=0; i<strlen(str2); i++){
    if(isalpha(str2[i])){
      idx = str2[i] - 'a';
      alphacount2[idx]++;
    }
  }

  for(i=0; i<26; i++){
    if(alphacount1[i] != alphacount2[i]){
      printf("Not anagram!\n");
      return 0;
    }
  }
  printf("Anagram!\n");
}