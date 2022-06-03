#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct st_user* getUser();

struct st_user{
 char userid[20];
 char userpw[20];
};

int main(void) {
	struct st_user* user;
  user = getUser();
  printf("\nUser ID: %s\n", user->userid);
  printf("Password: %s\n", user->userpw);
	return 0;
}

struct st_user* getUser(){
  struct st_user* u = (struct st_user*)malloc(sizeof(struct st_user));
  while(1){
    printf("User ID? ");
    scanf("%s", u->userid);
    if(strlen(u->userid) < 4)
      printf("-> 4글자 이상 입력할 것\n");
    else break;
  }
  char tmp[20];
  while(1){
    printf("Password? ");
    scanf("%s", tmp);
    if(strlen(tmp) < 4)
      printf("-> 4글자 이상 입력할 것\n");
    else break;
  }
  strncat(u->userpw, tmp, 2);
  for(int i=0; i<strlen(tmp)-2; i++){
    strcat(u->userpw, "*");
  }
  return u;
}