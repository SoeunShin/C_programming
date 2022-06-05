#include <stdio.h>
#include <stdlib.h>

struct st_point* getPoint(); // 메모리 할당받아 좌표 구조체의 x,y 값을 입력받아 이 주소값을 리턴함
int getPosition(struct st_point* p);
// 리턴값 : 좌표의 사분면 위치 (0:축, 1:1사분면, 2:2사분면, 3:3사분면, 4:4사분면)
// 수행내용 : 전달받은 좌표의 위치를 파악하여 위치번호(0~4)를 리턴함

struct st_point{ 
 float x; // x좌표 값 
 float y; // y좌표 값 
};

int main(void) {
  struct st_point* mypoint[10];
  int position;
  int cnt[5] = {0};
  for(int i=0; i<10; i++){
    printf("%d번째 좌표\n", i+1);
    mypoint[i] = getPoint();
  }
  for(int i=0; i<10; i++){
    position = getPosition(mypoint[i]);
    if(position == 0) {
      printf("%d번째 좌표 축에 위치\n", i+1);
      cnt[0]++;
    }
    else{
      printf("%d번째 좌표 %d사분면에 위치\n", i+1, position);
      cnt[position]++;
    } 
  }
  printf("축의 좌표는 모두 %d개\n", cnt[0]);
  for(int i=0; i<4; i++)
    printf("%d사분면의 좌표는 모두 %d개\n", i+1, cnt[i+1]);
  return 0;
}

struct st_point* getPoint(){
  struct st_point* p = (struct st_point*)malloc(sizeof(struct st_point));
  printf("x, y값? ");
  scanf("%f %f", &(p->x), &(p->y));
  return p;
}

int getPosition(struct st_point* p){
  if(p->x == 0 || p->y == 0) return 0;
  else if(p->x > 0 && p->y > 0) return 1;
  else if(p->x < 0 && p->y > 0) return 2;
  else if(p->x < 0 && p->y < 0) return 3;
  else return 4;
}