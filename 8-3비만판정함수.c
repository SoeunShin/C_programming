#include <stdio.h>
/*
  1. 10번 반복
    1-1. 신장과 체중 물어보고 입력받음 
    1-2. 신장이나 체중이 음수이면
      1-2-1. 잘못 입력
    1-3. 아니면
      1-3-1. 함수 호출 후 리턴값 result에 저장 
      1-3-2. result == 0 -> 저체중
             result == 1 -> 정상
             result == 2 -> 과체중
             result == 3 -> 경도비만
             나머지 -> 고도비만
-------------------------------------
  함수
  1. 비만도 계산
  2. bmi < 18.5 -> 저체중, 0 리턴
     bmi < 23 -> 정상, 1 리턴
     bmi < 25 -> 과체중, 2 리턴
     bmi < 30 -> 경도비만, 3 리턴
     나머지 -> 고도비만, 4 리턴
*/
int askBiman(int height, int weight);

int main(void) {
  int i;
  int height, weight;
  int result;

  for(i=0; i<10; i++){
    printf("%d번째 사람 신장과 체중? ", i+1);
    scanf("%d %d", &height, &weight);
    
    if(height < 0 || weight < 0)
      printf("잘못 입력하셨습니다.\n");
    else{
      result = askBiman(height, weight);
      if(result == 0) printf("저체중\n");
      else if(result == 1) printf("정상\n");
      else if(result == 2) printf("과체중\n");
      else if(result == 3) printf("경도비만\n");
      else printf("고도비만\n");
    }
  }
  return 0;
}

int askBiman(int height, int weight){
  int bmi = weight / (height*0.01*height*0.01);
  if(bmi < 18.5) return 0;
  else if(bmi < 23) return 1;
  else if(bmi < 25) return 2;
  else if(bmi < 30) return 3;
  else return 4;
}