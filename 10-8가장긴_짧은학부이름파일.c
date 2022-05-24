#include <stdio.h>
#include <string.h>

int main(void) {
  FILE* file;
  file = fopen("name.txt", "r");

  char line[100];
  char longest[100];
  char shortest[100];
  int cnt = 0;
  int long_cnt = 0;
  int short_cnt = 100;
  
  while(!feof(file)){
    fgets(line, 100, file);
    if(strlen(line) > long_cnt){
      strcpy(longest, line);
      long_cnt = strlen(longest);
    }
    if(strlen(line) < short_cnt){
      strcpy(shortest, line);
      short_cnt = strlen(shortest);
    }
    cnt++;
  }
  printf("Count : %d\n", cnt);
  printf("Longest name : %s", longest);
  printf("Shortest name : %s", shortest);
  return 0;
}
