#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user{
    char userid[20];
    char userpw[20];
};
struct st_user* getUser(); 
void saveUser(struct  st_user* userlist[], int size, char* filename);

int main(void) {
    struct st_user* userlist[10]; // 10명의 로그인 데이터 보관용 포인터 배열
    for(int i=0; i<10; i++){
        printf("#%d User\n", i+1);
        userlist[i] = getUser();
    }
    saveUser(userlist, 10, "user.txt");
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

void saveUser(struct  st_user* userlist[], int size, char* filename){
  FILE* file;
  file = fopen(filename, "w");

  for(int i=0; i<size; i++){
    fprintf(file, "%s %s\n", userlist[i]->userid, userlist[i]->userpw);
  }
  printf("%s에 저장하였습니다.\n", filename);
  fclose(file);
}