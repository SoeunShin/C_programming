#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* findLongestWord(char* str);

int main(void) {

  char line[100];     // 입력받을 문장 
  printf("문장 입력 > ");
  fgets(line, 100, stdin); 
  line[strlen(line)-1]='\0';

  // 이곳에 코드를 작성하라
  char* p = findLongestWord(line);
  printf("결과 > %s 중에 가장 긴 단어는 ", line); 
  
  int cnt = 0;
  while(1){
    if(*p=='\0' || *p==' ')
      break;
    printf("%c", *p);
    cnt++;
    p++;
  }
  printf(", 길이 %d입니다.\n", cnt);
  return 0;
}

char* findLongestWord(char* str){
  int length = 0;
  int max = 0;
  char* maxp = &str[0];
  for(int i=0; i<strlen(str)+1; i++){
    length++;
    if(str[i] == '\0' || str[i] == ' '){
      length--;
      if(length > max) {
        max = length;
        maxp = &str[i-length];
      }
      length = 0;
    }
  }
  return maxp;
}