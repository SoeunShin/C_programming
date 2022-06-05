#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int count_vowels(char *str);
int readText(char* p[]);
// 리턴값 : str 문자열 내에 들어있는 모음의 개수 (모음 종류 : a,e,i,o,u,A,E,I,O,U)

int main(void){
  char* pstr[20]; // 실제로 저장될 최대 20개의 문장을 위한 포인터 배열
  int vowel;
  int num = readText(pstr);
  printf("%d lines read.\n", num);
  for(int i=0; i<num; i++){
    vowel = count_vowels(pstr[i]);
    printf("#%d - %s [%d]\n", i+1, pstr[i], vowel);
  }
  return 0;
}

int count_vowels(char *str){
  int vowel_cnt = 0;
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  for(int i=0; i<strlen(str); i++){
    for(int j=0; j<5; j++){
      if(tolower(str[i]) == vowels[j])
        vowel_cnt++;
    }
  }
  return vowel_cnt;
}

int readText(char* p[]){
  FILE* file;
  file = fopen("data.txt", "r");
  char tmp[100]; // 임시 문자열 
  int cnt = 0; // 읽은 문장 개수

  while(!feof(file)){
    if(!fgets(tmp, 100, file)) break;
    if(tmp[strlen(tmp)-1] == '\n')
      tmp[strlen(tmp)-1] = '\0';
    p[cnt] = (char*)malloc(sizeof(char)*strlen(tmp)+1);
    strcpy(p[cnt], tmp);
    cnt++;
  }
  fclose(file);
  return cnt;
}