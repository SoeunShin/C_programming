#include <stdio.h>
// 이 곳에 생각 정리
/*
  1. 남학생층 점호
  2. 2번 큰 반복 (0~1)
    2-1. 3번 작은 반복
      2-1-1. 남자 호실의 점호 인원 수를 입력받아 person 배열에 저장 
      2-1-2. sum[0], sum[2]에 인원 수 더하기 
  3. 2번 큰 반복 (2~3)
    3-1. 3번 작은 반복
      3-1-1. 여자 호실의 점호 인원 수를 입력받아 person 배열에 저장 
      3-1-2. sum[1], sum[2]에 인원 수 더하기 
  4. 비율 계산
  5. 남: sum[0] / 24 * 100
  6. 여: sum[1] / 24 * 100
  7. 전체: sum[2] / 48 * 100
*/
int main(void) {
	int person[4][3];   // 4개 층별 3개 호실의 점호 인원 수 
	int sum[3]={0};         // 점호 인원 수 합계 (남, 여, 전체)
	float ratio[3];     // 점호 인원 수 비율 (남, 여, 전체)
	int i, j;           // 반복문을 위한 변수 

// 이 곳에 코드 작성
  printf("남학생층 점호\n");
  for(i=0; i<2; i++){
    for(j=0; j<3; j++){
      printf("%d0%d호실 점호 인원 > ", i+1, j+1);
      scanf("%d", &person[i][j]);
      sum[0] += person[i][j];
      sum[2] += person[i][j];
    }
  }
  printf("여학생층 점호\n");
  for(i=2; i<4; i++){
    for(j=0; j<3; j++){
      printf("%d0%d호실 점호 인원 > ", i+1, j+1);
      scanf("%d", &person[i][j]);
      sum[1] += person[i][j];
      sum[2] += person[i][j];
    }
  }
	ratio[0] = (float)sum[0] / 24 * 100.0;
  ratio[1] = (float)sum[1] / 24 * 100.0;
  ratio[2] = (float)sum[2] / 48 * 100.0;
	printf("점호 결과\n");
	printf("남학생 : %d명/24명 (%.1f%%)\n", sum[0], ratio[0]);
	printf("여학생 : %d명/24명 (%.1f%%)\n", sum[1], ratio[1]);
	printf("전체 : %d명/48명 (%.1f%%)\n", sum[2], ratio[2]);
	
	return 0;
}
