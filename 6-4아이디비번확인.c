#include <stdio.h>
/*
  1. 아이디를 입력받음
  2. 비밀번호를 입력받음
  3. 5번 반복문
    3-1. 아이디가 있는지 확인
      3-1-1. 있으면 -> 해당 인덱스의 비번과 입력받은 비번이 같은지 확인
        3-1-1-1. 비밀번호가 같으면 -> "로그인 성공" 출력 후 종료
        3-1-1-2. 비밀번호가 다르면 -> "아이디는 맞는데 비번이 틀림" 출력 후 종료
  4. "그런 아이디가 없음" 출력 
*/
int main(void) {
  char username[5][20]={"kim", "lee", "park", "hong", "choi"}; 
  char password[5][20]={"1111", "1234", "3456", "3535", "7777"};
  char id[20];
  char pw[20];
  
  printf("아이디를 입력하시오. ");
  scanf("%s", id);
  printf("비밀번호를 입력하시오. ");
  scanf("%s", pw);

  for(int i=0; i<5; i++){
    if(strcmp(username[i], id) == 0){
      if(strcmp(password[i], pw) == 0){
        printf("로그인 성공\n");
        return 0;
      }
      else{
        printf("아이디는 맞는데 비번이 틀림\n");
        return 0;
      }
    }
  }
  printf("그런 아이디가 없음\n");
  return 0;
}