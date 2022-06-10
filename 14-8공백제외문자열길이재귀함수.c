#include <stdio.h>

/*
  1. 문장의 끝(\n)이 나오면 
    1-1. 종료
  2. 공백이면
    2-1. 다음 주소를 넣어서 재귀함수 호출
  3. 문자이면
    3-1. 다음 주소를 넣은 재귀함수를 호출하고 1을 더함
*/

int rStrlen(char* str);

int main(void) {
	char line[100];
	printf("Enter a string > ");
	fgets(line, 100, stdin);
	printf("length : %d\n", rStrlen(line));
	return 0;
}

int rStrlen(char* str){
  if(*str == '\n') return 0;
  else if(*str == ' ')
    return rStrlen(str+1);
  else
    return rStrlen(str+1)+1;  
}