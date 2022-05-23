#include <stdio.h>

float findMax(float num[], int size);
float findMin(float num[], int size);

int main(void) {
  FILE* file;
  float num[10];
  file = fopen("data.txt", "r");

  float sum = 0.0;
  float max, min, avg;
  for(int i=0; i<10; i++){
    fscanf(file, "%f", &num[i]);
    printf("%d번 심사점수 : %.1f\n", i+1, num[i]);
    sum += num[i];
  }
  fclose(file);
  
  max = findMax(num, 10);
  min = findMin(num, 10);
  sum -= (max + min);
  avg = sum / 8.0;
  printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 %.1f 입니다.", avg);
  return 0;
}

float findMax(float num[], int size){
  float max = 0.0;
  for(int i=0; i<10; i++){
    if(num[i] > max)
      max = num[i];
  }
  return max;
}

float findMin(float num[], int size){
  float min = 10000000.0;
  for(int i=0; i<10; i++){
    if(num[i] < min)
      min = num[i];
  }
  return min;
}