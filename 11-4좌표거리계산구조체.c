#include <stdio.h>
#include <math.h>

struct point{ 
  float x; // x좌표 값 
  float y; // y좌표 값 
};

float calcDistance(struct point* p1, struct point* p2); // 두 점의 거리 구하는 함수

int main(void) {
  struct point p1, p2;
  printf("첫 번째 좌표의 x값? ");
  scanf("%f", &p1.x);
  printf("첫 번째 좌표의 y값? ");
  scanf("%f", &p1.y);
  printf("두 번째 좌표의 x값? ");
  scanf("%f", &p2.x);
  printf("두 번째 좌표의 y값? ");
  scanf("%f", &p2.y);

  float dist = calcDistance(&p1, &p2);
  printf("\n두 좌표 사이의 거리는 %.1f\n", dist);
  return 0;
}

float calcDistance(struct point* p1, struct point* p2){
  float dist = sqrt(pow((p1->x - p2->x),2) + pow((p1->y - p2->y),2));
  return dist;
}