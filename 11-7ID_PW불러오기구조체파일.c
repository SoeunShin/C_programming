#include <stdio.h>

struct st_user{
  char userid[20];
  char userpw[20];
};

int main(void) {
  FILE* file;
  file = fopen("user.txt", "r");

  int i;
  struct st_user user[10];
  
	for(i=0; i<10; i++){
    fscanf(file, "%s %s", user[i].userid, user[i].userpw);
  }
  fclose(file);

  printf("등록된 사용자 목록\n");
  printf("No ID   Password\n");
  for(i=0; i<10; i++){
    printf("%-3d%-5s%s\n", i+1, user[i].userid, user[i].userpw);
  }
	return 0;
}