#include <stdio.h>

int main(void) {
	char userid[10][20];
	char userpw[10][20];  
	
	FILE* file;
  file = fopen("user.txt", "r");
  
  int n = 0;
  while(1){
    int temp = fscanf(file, "%s %s", userid[n], userpw[n]);
    if(temp <= 0) break;
    n++;
  }
  
  printf("등록된 사용자 목록\n");
  printf("No ID   Password\n");
  for(int i=0; i<n; i++){
    printf("%-3d%s %s\n", i+1, userid[i], userpw[i]);
  }
	return 0;
}