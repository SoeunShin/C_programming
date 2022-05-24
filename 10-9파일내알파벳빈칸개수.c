#include <stdio.h>
#include <string.h>

int main(void) {
  int countUp; //대문자 수 
  int countLow; //소문자 수
  int countSpace; //빈칸 수
  FILE* file;
  file = fopen("data.txt", "r");

  char line[100];
  int upper = 0;
  int lower = 0;
  int blank = 0;
  while(!feof(file)){
    fgets(line, 100, file);
    for(int i=0; i<strlen(line); i++){
      if(line[i]>='A' && line[i]<='Z') upper++;
      else if(line[i]>='a' && line[i]<='z') lower++;
      else if(line[i] == ' ') blank++;
      else continue;
    }
  }
  fclose(file);

  printf(">> 대문자 : %d개, 소문자 : %d개, 공백 : %d개\n", upper, lower, blank);
  return 0;
}