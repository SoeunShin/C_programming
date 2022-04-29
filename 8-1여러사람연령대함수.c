#include <stdio.h>
/*
  1. 무한 반복
    1-1. 태어난 년도를 입력받음
    1-2. 2022보다 큰 숫자를 입력하면 break
    1-3. 년도를 배열에 저장 
    1-4. count++
    1-5. ageToGroup 함수를 호출
    1-6. 리턴받은 값에 해당하는 count배열의 index를 증가 
  2. count만큼 반복 
    2-1. 나이 계산
    2-2. 나이 출력 
  3. 각 연령대별 인원수 출력
---------------------------------------
  1. 함수
    1-1. 파라미터로 받은 년도로 나이를 계산
    1-2. 7세 미만 -> 유아, 0 리턴
         13세 미만 -> 어린이, 1 리턴
         20세 미만 -> 청소년, 2 리턴
         30세 미만 -> 청년, 3 리턴
         60세 미만 -> 중년, 4 리턴
         나머지 -> 노년, 5 리턴
*/
int ageToGroup(int b);
int main(void) {
  int birth_year;     // 입력받은 태어난 년도
  int year[100];      // 각 사람들의 생년 (최대 100명)  
  int count_person = 0;   // 입력된 인원 수
  int count[6] = {0};       // 6가지 연령대별 숫자
  int age;

  while(1){
    printf("%d번째 사람의 태어난 년도를 입력하시오. ", count_person + 1);
    scanf("%d", &birth_year);
    if(birth_year > 2022) break;
    year[count_person] = birth_year;
    count_person++;
    count[ageToGroup(birth_year)]++;
  }
  
  for(int i=0; i<count_person; i++){
    age = 2022 - year[i] + 1;
    printf("%d번째 사람의 나이는 %d입니다.\n", i+1, age);
  }

  printf("유아는 %d명입니다.\n", count[0]);
  printf("어린이는 %d명 입니다.\n", count[1]);
  printf("청소년은 %d명 입니다.\n", count[2]);
  printf("청년은 %d명 입니다.\n", count[3]);
  printf("중년은 %d명 입니다.\n", count[4]);
  printf("노년은 %d명 입니다.\n", count[5]);
  return 0;
}

int ageToGroup(int year){
  int age = 2022 - year + 1;
  if(age < 7) return 0;
  else if(age < 13) return 1;
  else if(age < 20) return 2;
  else if(age < 30) return 3;
  else if(age < 60) return 4;
  else return 5;
}