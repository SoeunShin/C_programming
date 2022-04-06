#include <stdio.h>
#include <string.h>
/*
  1. 사용자 id를 입력받는다.
  2. 무한반복  
    2-1. 사용자 pw를 입력받는다.
    2-2. 3글자 이상인지 확인
      2-2-1. 3글자 이상이면 -> break
      2-2-1. 아니면 -> "3글자 이상 입력할 것" 출력
  3. 사용자 이름을 입력받는다.
  4. 사용자 id 출력
  5. pw의 2글자를 제외한 나머지 글자는 *로 출력
  6. 사용자 이름 출력 
*/
int main(void) {
  char userid[30];         
  char password[30]; 
  char name[30];

  printf("User Id? ");
  scanf("%s", userid);

  while(1){
    printf("Password? ");
    scanf("%s", password);
    if(strlen(password) >= 3) break;
    else printf("-> 3글자 이상 입력할 것\n");
  }

  printf("User Name? ");
  scanf("%s", name);
  
  printf("\nUser Id: %s\n", userid);

  char new_pw[30] = "";
  strncat(new_pw, password, 2);
  for(int i=0; i<strlen(password)-2; i++){
    strcat(new_pw, "*");
  }
  printf("Password: %s\n", new_pw);

  printf("User Name: %s\n", name);
  return 0;
}