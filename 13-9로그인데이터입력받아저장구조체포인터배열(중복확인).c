#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user{
    char userid[20];
    char userpw[20];
};

struct st_user* getUser(struct st_user* list[], int size);
// 파라미터 : 현재까지 등록된 로그인데이터 목록, 목록의 개수
// 수행내용 : 로그인 정보 입력은 기존과 동일하지만, 파라미터로 전달된 로그인목록을 활용해서 ID가 중복되는지 검사할 것.
void saveUser(struct st_user* list[], int size, char* filename);

int main(void) {
    struct st_user* userlist[10]; // 10명의 로그인 데이터 보관용 포인터 배열
    for(int i=0; i<10; i++){
        printf("#%d User\n", i+1);
        userlist[i] = getUser(userlist, i);
    }
    saveUser(userlist, 10, "user.txt");
    return 0;
}

struct st_user* getUser(struct st_user* list[], int size){
  struct st_user* u = (struct st_user*)malloc(sizeof(struct st_user));
  while(1){
    int check = 0;
    printf("User ID? ");
    scanf("%s", u->userid);
    if(strlen(u->userid) < 4)
      printf("-> 4글자 이상 입력할 것\n");
    else{
      for(int i=0; i<size; i++){
        if(strcmp(u->userid, list[i]->userid) == 0){
          printf("중복되는 ID입니다. 다시 입력하세요.\n");
          check = 1;
        }
      }
      if(check == 0) break;
    }
  }
  
  while(1){
    printf("Password? ");
    scanf("%s", u->userpw);
    if(strlen(u->userpw) < 4)
      printf("-> 4글자 이상 입력할 것\n");
    else break;
  }
  return u;
}


void saveUser(struct  st_user* list[], int size, char* filename){
  FILE* file;
  file = fopen(filename, "w");

  for(int i=0; i<size; i++){
    fprintf(file, "%s %s\n", list[i]->userid, list[i]->userpw);
  }
  printf("%s에 저장하였습니다.\n", filename);
  fclose(file);
}
