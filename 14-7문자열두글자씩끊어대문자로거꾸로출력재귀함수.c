#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rPrint(char* str);

int main(void) {
	char str[80];
	printf("Enter a string >>");
	fgets(str, 80, stdin);
	str[strlen(str)-1]='\0';
	rPrint(str);
	printf("\n");
	return 0;
}

void rPrint(char* str){
  char tmp[80];
  int len = strlen(str);
  for(int i=0; i<strlen(str); i++){
    str[i] = toupper(str[i]);
  }
  if(strlen(str)<=2)
    printf("%s", str);
  else if(strlen(str)%2==0){ // 길이가 짝수
    printf("%c%c", str[len-2], str[len-1]);
    str[len-1] = '\0';
    str[len-2] = '\0';
    rPrint(str);
  }
  else{ // 길이가 홀수
    printf("%c", str[len-1]);
    str[len-1] = '\0';
    rPrint(str);
  }
}