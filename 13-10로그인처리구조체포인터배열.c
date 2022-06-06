#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user{
    char userid[20];
    char userpw[20];
};

int checkUser(struct st_user* list[], int size, struct st_user* temp);
// 파라미터 : 로그인 전체목록, 목록 개수, 검사하려는 로그인 정보(입력받은 내용으로 구축한 구조체의 포인터)
// 리턴값 : 검사결과 1:아이디와 비밀번호 둘다 맞음, 2:아이디는 맞는데 비밀번호 틀림, 3:일치하는 아이디 없음
int getUser(struct st_user* list[], char* filename);

int main(void) {
  struct st_user* userlist[20]; // 최대 20명까지를 다룰 수 있음 
  struct st_user* tmp = (struct st_user*)malloc(sizeof(struct st_user));
  
  int size = getUser(userlist, "user.txt");
  printf("%d명의 로그인 정보를 읽었습니다.\n", size);
  while(1){
    int login = checkUser(userlist, size, tmp);
    if(login == 1){
      printf("로그인 성공! : 어서오세요 %s님\n", tmp->userid);
      break;
    }
    else if(login == 2)
      printf("로그인 실패! : 비밀번호가 틀렸습니다.\n");
    else if(login == 3)
      printf("로그인 실패! : 존재하지 않는 ID입니다.\n");
  }
  return 0;
}

int getUser(struct  st_user* list[], char* filename){
  FILE* file;
  file = fopen(filename, "r");
  int cnt = 0;
  while(!feof(file)){
    list[cnt] = (struct st_user*)malloc(sizeof(struct st_user));
    fscanf(file, "%s %s\n", list[cnt]->userid, list[cnt]->userpw);
    cnt++;
  }
  fclose(file);
  return cnt;
}

int checkUser(struct st_user* list[], int size, struct st_user* temp){
  printf("로그인하려는 ID, PW를 입력하시오. > ");
  scanf("%s %s", temp->userid, temp->userpw);
  
  for(int i=0; i<size; i++){
    if(strcmp(list[i]->userid, temp->userid) == 0){ // id가 존재하면 
      if(strcmp(list[i]->userpw, temp->userpw) == 0){ // pw가 일치하면
        return 1;
      }
      else return 2; // id는 존재하는데, pw이 다르면
    }  
  }
  return 3; // id가 존재하지 않으면
}