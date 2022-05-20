#include <stdio.h>
/*
  1. 파일 이름을 입력받기
  2. 입력받은 파일 이름을 읽기 모드로 열기
  3. 파일의 끝에 도달하기 전까지 숫자를 하나씩 읽음
    3-1. max보다 크면 max값 수정
    3-2. min보다 작으면 min값 수정
*/
void maxMinOfTen(int number[10], int* max, int* min);

int main(void) { 
  int num[10];    // 10개의 숫자를 받을 배열
  int max_num;    // 가장 큰 숫자를 리턴 받을 변수,
  int min_num;    // 가장 작은 숫자를 리턴 받을 변수
  char file[20];  // 파일 이름
  FILE* data;
  // 이 곳에 코드를 작성하라.
  printf("파일 이름을 입력하세요. ");
  scanf("%s", file);

  data = fopen(file, "r");

  int i=0;
  max_num = 0;
  min_num = 1000000;
  while(EOF != fscanf(data, "%d", &num[i])){
    if(num[i] > max_num) max_num = num[i];
    if(num[i] < min_num) min_num = num[i];
  }
  printf("가장 큰 수는 %d이고, 가장 작은 수는 %d입니다.\n", max_num, min_num); 
  fclose(data);
  return 0; 
}