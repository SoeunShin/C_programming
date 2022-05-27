#include <stdio.h>

struct st_user{
  char userid[20];
  char userpw[20];
};

int main(void) {
  FILE* file;
  file = fopen("user.txt", "w");
  
  struct st_user user[10];
  int i;

  for(i=0; i<10; i++){
    printf("%d번째 사람 ID Password? ", i+1);
    scanf("%s %s", user[i].userid, user[i].userpw);
  }

  printf("등록된 사용자 목록\n");
  printf("No ID Password\n");
  for(i=0; i<10; i++){
    printf("%d %s %s\n", i+1, user[i].userid, user[i].userpw);
    fprintf(file, "%s %s\n", user[i].userid, user[i].userpw);
  }
  printf("user.txt에 저장함\n");
	return 0;
}