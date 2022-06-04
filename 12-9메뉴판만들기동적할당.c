#include <stdio.h>
#include <stdlib.h>

struct st_menu* getMenu();
// 수행내용 : 메뉴정보 구조체를 동적 메모리 할당 후, 이곳에 메뉴 정보를 입력받아 저장한 후, 주소값 리턴함

struct st_menu{ 
 int no; 				// 메뉴번호
 char name[20]; 			// 메뉴명 
 char madein[20]; 			// 원산지 
 int price; 				// 가격 
};

int main(void) {
  struct st_menu *menu; 	// 메뉴 구조체 포인터
  menu = getMenu();
  printf("메뉴번호 메뉴이름 원산지 1인분가격\n");
  printf("   %d    %s %s   %d\n", menu->no, menu->name, menu->madein, menu->price);
  return 0;
}

struct st_menu* getMenu(){
  struct st_menu* m = (struct st_menu*)malloc(sizeof(struct st_menu));
  printf("메뉴번호, 메뉴명, 원산지, 가격을 입력하라. > ");
  scanf("%d %s %s %d", &m->no, m->name, m->madein, &m->price);
  return m;
}