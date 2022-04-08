#include <stdio.h>
#include <string.h>
/*
  1. 학부의 개수만큼 반복 
    1-1. 학부의 이름이 max보다 크면
      1-1-1. max를 수정
      1-1-2. max 인덱스 저장 
    1-2. 학부의 이름이 min보다 작으면 
      1-2-1. min을 수정 
      1-2-2. min 인덱스 저장 
  2. 저장된 max, min index의 학부 이름을 출력
*/
int main(void) {
  char names[13][100]={
"Global Leadership School",
"International Studies, Languages and Literature",
"Management and Economics",
"Law",
"Counseling Psychology and Social Welfare", "Communication Arts",
"Spatial Environment System Engineering", "Mechanical and Control Engineering", "Contents Convergence Design",
"Life Science",
"Computer Science and Electrical Engineering", "Global Entrepreneurship and ICT",
"Creative Convergence Education"};

  int max = 0, min = 100;
  int max_idx, min_idx;
  for(int i=0; i<13; i++){
    if(strlen(names[i]) > max){
      max = strlen(names[i]);
      max_idx = i;
    }
    if(strlen(names[i]) < min){
      min = strlen(names[i]);
      min_idx = i;
    }
  }
  
  printf("가장 긴 학부 이름은 %s\n", names[max_idx]);
  printf("가장 짧은 학부 이름은 %s 입니다.\n", names[min_idx]);
  return 0;
}