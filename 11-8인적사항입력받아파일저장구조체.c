#include <stdio.h>
#include <string.h>

struct st_person{
  char name[20];
  char address[80];
  int age;
};

int main(void) {
  struct st_person p[3];
  int i;
  char order[3][5] = {"첫", "두", "세"};
  
  FILE* file;
  file = fopen("result.txt", "w");
  
  for(i=0; i<3; i++){
    printf("%s 번째 사람 인적사항을 입력하시오.\n", order[i]);
    printf("이름은? ");
    scanf("%s", p[i].name);
    printf("주소는? ");
    getchar();
    fgets(p[i].address, 80, stdin);
    p[i].address[strlen(p[i].address)-1] = '\0';
    printf("나이는? ");
    scanf("%d", &p[i].age);

    fprintf(file, "%s 번째 사람 : %s/ %s/ %d\n", order[i], p[i].name, p[i].address, p[i].age);
  }

  for(i=0; i<3; i++){
    printf("%s 번째 사람 : %s/ %s/ %d\n", order[i], p[i].name, p[i].address, p[i].age);
  }
  fclose(file);
  return 0;
}