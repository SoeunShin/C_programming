#include <stdio.h>

int main(void) {
	char userid[10][20];
	char userpw[10][20];

  FILE* file;
  file = fopen("user.txt", "w");
  for(int i=0; i<10; i++){
    printf("%d번째 사람 ID Password? ", i+1);
    scanf("%s %s", userid[i], userpw[i]);
    fprintf(file, "%s %s\n", userid[i], userpw[i]);
  }

  printf("\n등록된 사용자 목록\n");
  printf("No ID Password\n");
  for(int i=0; i<10; i++){
    printf("%d %s %s\n", i+1, userid[i], userpw[i]);
  }
  printf("\nuser.txt에 저장함\n");
	return 0;
}