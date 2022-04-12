#include <stdio.h>
#include <string.h>
/*
  1. 3글자 이상의 단어를 입력받음 
  2. 3글자 이상이 아니면 메세지 출력 후 종료 
  3. 13번 반복 
    3-1. 입력받은 길이 만큼의 학부 이름을 first_name에 저장 
    3-1. 입력받은 단어와, first_name이 같으면 
        3-1-1. 학부 이름 출력
        3-1-2. 개수++
  4. 개수 출력 
*/
int main(void) {
  char names[13][100]={"Global Leadership School",
  "International Studies, Languages and Literature",
  "Management and Economics",
  "Law",
  "Counseling Psychology and Social Welfare",
  "Communication Arts",
  "Spatial Environment System Engineering",
  "Mechanical and Control Engineering",
  "Contents Convergence Design",
  "Life Science",
  "Computer Science and Electrical Engineering",
  "Global Entrepreneurship and ICT",
  "Creative Convergence Education"
  };
  char word[30];
  char first_word[30] = "";
  int cnt = 0;
  int i;
  
  printf("Input >> ");
  scanf("%s", word);
  if(strlen(word) < 3) {
    printf("3글자 이상 입력해주세요.\n");
    return 0;
  }

  printf("Matching : \n");
  for(i=0; i<13; i++){
    strncpy(first_word, names[i], strlen(word));
    if(strcmp(first_word, word) == 0){
      printf("[%s]\n", names[i]);
      cnt++;
    }
  }
  printf("%d major found\n", cnt);
  
  return 0;
}
