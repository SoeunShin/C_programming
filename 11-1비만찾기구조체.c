#include <stdio.h>

float evalbmi(int h, int w);

struct st_bmi{
  int height, weight; // 키(cm), 몸무게(kg)
  float bmi; // 비만도
  int bmi_index; // 1,2,3,4
};

int main(void) {
  FILE* file;
  file = fopen("data.txt", "r");

  int cnt = 0;
  struct st_bmi student[10];
  for(int i=0; i<5; i++){
    fscanf(file, "%d %d", &student[i].height, &student[i].weight);
    printf("%d번째 사람의 신장(cm)과 체중(kg) : %d %d\n", i+1, student[i].height, student[i].weight);
    
    student[i].bmi = evalbmi(student[i].height, student[i].weight);
    if(student[i].bmi < 23) student[i].bmi_index = 1;
    else if(student[i].bmi < 25) student[i].bmi_index = 2;
    else if(student[i].bmi < 30) student[i].bmi_index = 3;
    else student[i].bmi_index = 4;

    if(student[i].bmi_index >= 3) cnt++;
  }
  printf("비만인 사람은 %d명입니다.\n", cnt);
  
  return 0;
}

float evalbmi(int h, int w){
  float bmi;
  bmi = w / (h*0.01*h*0.01);
  return bmi;
}
