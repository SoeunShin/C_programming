#include <stdio.h>
#include <string.h>

void rPrint(char* str, int n);

int main(void) {
	char str[80];
	printf("Enter a string >> ");
	fgets(str, 80, stdin);
	str[strlen(str)-1]='\0';
	rPrint(str, strlen(str));
	return 0;
}

void rPrint(char* str, int n){
  printf("%2lu. %c\n", strlen(str)-n+1, str[n-1]);
  if(n>1)
    rPrint(str, n-1);
}