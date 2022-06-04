#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readText(char* p[]);

int main(void) {
  char* pstr[20]; // 실제로 저장될 최대 20개의 문장을 위한 포인터 배열 
  char* longest;  // 가장 긴 문장을 가리키는 포인터
  char* shortest;	// 가장 짧은 문장을 가리키는 포인터

  int num = readText(pstr);
  printf("%d lines read.\n", num);

  int max = 0, min = 100;
  int maxi, mini;

  for(int i=0; i<num; i++){
    if(strlen(pstr[i]) > max){
      max = strlen(pstr[i]);
      longest = pstr[i];
      maxi = i;
    }
    if(strlen(pstr[i]) < min){
      min = strlen(pstr[i]);
      shortest = pstr[i];
      mini = i;
    }
  }
  printf("Longest #%d - %s\n", maxi+1, longest);
  printf("Shortest #%d - %s\n", mini+1, shortest);
  return 0;
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