#include<stdio.h>
#include<string.h>
/*
  1. 3글자 이상의 단어를 입력받음
  2. 13번 반복
    2-1. 입력받은 단어가 학부 이름에 포함되어 있으면 
      2-1-1. 학부 이름 출력
      2-1-2. 개수++
  3. 개수 출력 
*/
int main(void){
  char names[13][100]={ "Global Leadership School",  
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
  int i;
  int cnt = 0;
  printf("Input >> ");
  scanf("%s", word);

  printf("Matching : \n");
  for(i=0; i<13; i++){
    if(strstr(names[i], word) != NULL){
      printf("[%s]\n", names[i]);
      cnt++;
    }
  }
  printf("%d major found\n", cnt);
  return 0;
}