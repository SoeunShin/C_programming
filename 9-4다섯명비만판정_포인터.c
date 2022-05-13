#include <stdio.h>
/*
  함수
  1. 신장과 체중 물어보고 입력받기
  2. 신장 포인터에 m로 환산하여 저장
  3. 체중 포인터에 저장
  4. bmi 계산
  5. bmi 리턴
*/
float bmiFromHW(float* h, float* w);

int main(void) {
	float height, weight, bmi;
	int count=0;
	for(int i=0;i<5;i++){
		bmi = bmiFromHW(&height, &weight);
		if (bmi > 25) {
			printf("비만입니다. 키:%.2f미터 몸무게:%.1fkg\n",height, weight);
			count++;
		}
	}
	printf("비만인 사람은 %d명입니다.\n", count);
	return 0;
}

float bmiFromHW(float* h, float* w){
	float bmi;
  float height, weight;
  printf("신장(cm)과 체중(kg)을 입력하시오.\n");
  scanf("%f %f", &height, &weight);
  *h = height * 0.01;
  *w = weight;
	bmi = weight / (height*0.01*height*0.01);
	return bmi;
}
