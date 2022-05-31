#include <stdio.h>

struct menu{ 
  int no; // 메뉴번호
  char name[20];  // 메뉴명 
  int price; // 가격 
};

int main(void) {
  struct menu mymenu[5];
  int i;

  FILE* file;
  file = fopen("menu.txt", "w");

  for(i=0; i<5; i++){
    printf("%d번째 메뉴의 번호, 메뉴명, 가격을 입력. ", i+1);
    scanf("%d %s %d", &mymenu[i].no, mymenu[i].name, &mymenu[i].price);
  }
  printf("메뉴번호 메뉴이름 1인분가격\n");
  for(i=0; i<5; i++){
    printf("%4d%13s%9d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);
    fprintf(file, "%4d%13s%9d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);
  }
  return 0;
}