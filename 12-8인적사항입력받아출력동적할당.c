#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person* getPerson(); // 메모리를 동적 할당하여 인적사항을 입력받아 저장한 후 포인터 리턴

struct st_person{
 char name[20];
 char address[80];
 int age;
};

int main(void) {
  struct st_person* p[3];
  //제공된 코드 – main() 일부
  for(int i=0; i<3; i++){
    printf("#%d 인적사항을 입력하시오.\n",i+1);
    p[i] = getPerson();
  }
  for(int i=0; i<3; i++){
    printf("#%d : %s/ %s/ %d\n", i+1, p[i]->name, p[i]->address, p[i]->age);
  }
  return 0;
}

struct st_person* getPerson(){
  struct st_person* p = (struct st_person*)malloc(sizeof(struct st_person));
  printf("이름은? ");
  scanf("%s", p->name);
  getchar();
  printf("주소는? ");
  fgets(p->address, 80, stdin);
  p->address[strlen(p->address)-1] = '\0';
  printf("나이는? ");
  scanf("%d", &p->age);
  return p;
}