#include <stdio.h>
/*
  1. 전체 가족 수 물어보고 입력받기
  2. 가족 수 만큼 반복
    2-1. 각 가족의 아이, 어른, 노인의 숫자 물어보고 입력받기
    2-2. 아이 합계 += 아이
    2-3. 어른 합계 += 어른
    2-4. 노인 합계 += 노인
    2-5. 아이 수만큼 반복
      2-5-1. @ 출력
    2-6. 어른 수만큼 반복
      2-6-1. # 출력
    2-7. 노인 수만큼 반복
      2-7-1. $ 출력
  3. "모든 가족들의 숫자는 다음과 같습니다." 출력
  4. 아이 수만큼 반복
    4-1. @ 출력
  5. 어른 수만큼 반복
    5-1. # 출력
  6. 노인 수만큼 반복
    5-2. $ 출력
*/
int main(void) {
  int family;                                // 총 가족  
  int children, adult, senior;               // 가족 별 아이, 어른, 노인 수
  int all_children=0, all_adult=0, all_senior=0;   // 아이, 어른, 노인의 합계
  int i, j;                                  // 반복문 사용을 위한 변수 
  
  printf("전체 가족수는? ");
  scanf("%d", &family);

  if(family > 0){
    for(i=0; i<family; i++){
      printf("%d번 가족의 아이, 어른, 노인의 숫자는? ", i+1);
      scanf("%d %d %d", &children, &adult, &senior);
      all_children += children;
      all_adult += adult;
      all_senior += senior;
  
      if(children > 0){
        for(j=0; j<children; j++) printf("@");
        printf(" ");
      }
      if(adult > 0){
        for(j=0; j<adult; j++) printf("#");
        printf(" ");
      }
      if(senior > 0){
        for(j=0; j<senior; j++) printf("$");
      }
      printf("\n");
    }
  }
  
  printf("모든 가족들의 숫자는 다음과 같습니다.\n");
  
  if(family > 0){
    if(all_children > 0){
      for(i=0; i<all_children; i++) printf("@");
      printf(" ");
    }
    if(all_adult > 0){
      for(i=0; i<all_adult; i++) printf("#");
      printf(" ");
    }
    if(all_senior > 0){
      for(i=0; i<all_senior; i++) printf("$");
    }
    printf("\n");
  }
  return 0; 
}
