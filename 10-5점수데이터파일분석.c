#include <stdio.h>
#include <string.h>

void printResult(char className[3][10], int score[3][20], char name[20][30], int size);
int main(void) {
	char pname[3][10]={"C", "Java", "Python"};
	char name[20][30]; // 이름 (최대 20명)
	int score[3][20]; // 3과목 점수 (최대 20명)
	int sum[20]; // 총점 (최대 20명)
	float avg[20]; // 평균 (최대 20명)

  FILE* file;
  file = fopen("data.txt", "r");
  
  int n=0;
  while(1){
    int temp = fscanf(file, "%s %d %d %d %d %f", name[n], &score[0][n], &score[1][n], &score[2][n], &sum[n], &avg[n]);
    if(temp <= 0) break;
    n++;
  }
  fclose(file);
	
  printf("%d records read.\n", n);
  for(int i=0; i<n; i++){
    sum[i] = score[0][i] + score[1][i] + score[2][i];
    avg[i] = sum[i] / 3.0;
    printf("%-8s%-4d%-4d%-4d%-5d%.1f\n", name[i], score[0][i], score[1][i], score[2][i], sum[i], avg[i]);
  }

  printResult(pname, score, name, n);
  return 0;
}

void printResult(char className[3][10], int score[3][20], char name[20][30], int size){
  float classSum[3] = {0};
  float classAvg[3];
  char topName[3][30];
  int topScore[3] = {0};
  for(int i=0; i<3; i++){
    for(int j=0; j<size; j++){
      classSum[i] += score[i][j];
      classAvg[i] = classSum[i] / size;
      if(score[i][j] > topScore[i]){
        topScore[i] = score[i][j];
        strcpy(topName[i], name[j]);
      }
    }
  }

  for(int i=0; i<3; i++){
    printf("%s - average : %.1f, Top : %s (%d)\n", className[i], classAvg[i], topName[i], topScore[i]);
  }
}
