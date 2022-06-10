#include <stdio.h>

/*
  1. 문장의 끝(\n)이면 
    1-1. 종료
  2. 공백이면
    2-1. 다음 문자의 주소를 넣어 재귀함수를 호출하고 1을 더함
  3. 문자이면 
    3-1. 다음 문자의 주소를 넣어 재귀함수를 호출
*/

int rSpaces(char* str);

int main(void) {
	char line[100];
	printf("Enter a string > ");
	fgets(line, 100, stdin);
	printf("spaces : %d\n", rSpaces(line));
	return 0;
}

int rSpaces(char* str){
  if(*str == '\n') return 0;
  else if(*str == ' ') return rSpaces(str+1)+1;
  else return rSpaces(str+1);
}