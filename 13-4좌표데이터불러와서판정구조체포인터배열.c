#include <stdio.h>
#include <stdlib.h>

struct st_point{ 
    float x; 	// x좌표 값 
    float y; 	// y좌표 값 
}; 

int loadPoints(struct st_point* list[], char* filename); 
int getPosition(struct st_point* p);

int main()
{
    struct st_point* mypoint[50]; // 최대 50개의 좌표 저장용 
    int size; // 좌표 총 개수
    int count[5]={0}; // 좌표위치별 개수 (0:축 좌표 개수, 1~4:1~4분면 좌표 개수)
    size = loadPoints(mypoint, "point.txt");
    for(int i=0;i<size;i++){
        int pos = getPosition(mypoint[i]);
        count[pos]++;
    }
    printf("point.txt에서 %d개의 좌표정보를 읽었습니다.\n", size);
    printf("축의 좌표는 모두 %d개\n", count[0]);
    for(int i=1;i<=4;i++)
        printf("%d사분면의 좌표는 모두 %d개\n", i, count[i]);
    return 0;
}

int loadPoints(struct st_point* list[], char* filename){
  FILE* file;
  file = fopen(filename, "r");
  int i = 0;

  while(!feof(file)){
    list[i] = (struct st_point*)malloc(sizeof(struct st_point));
    fscanf(file, "%f %f", &list[i]->x, &list[i]->y);
    i++;
  }
  fclose(file);
  return i;
}

int getPosition(struct st_point* p){
  if(p->x == 0 || p->y == 0) return 0;
  else if(p->x > 0 && p->y > 0) return 1;
  else if(p->x < 0 && p->y > 0) return 2;
  else if(p->x < 0 && p->y < 0) return 3;
  else return 4;
}