#include <stdio.h>
/*
  1. 무한 반복
    1-1. 태어난 년도 물어보고 입력받기
    1-2. 2022 보다 큰 연도가 입력되면 종료
    1-3. 배열의 index 0부터 태어난 년도 저장
    1-4. index++, 총 인원수++
    1-5. 나이 계산 (나이 = 2022 - 태어난 년도 + 1)
    1-6. 연령대 구분
    ----> 7세 미만: 유아++
    ----> 13세 미만: 어린이++
    ----> 20세 미만: 청소년++
    ----> 30세 미만: 청년++
    ----> 60세 미만: 중년++
    ----> 나머지: 노년++
  2. 총 인원수 만큼 반복
    2-1. 각 사람의 나이 계산 -> 연도는 배열에서 가져옴 
    2-2. 각 사람의 나이 출력 
  3. 각 연령대의 인원수 출력
*/
int main(void) {
  int birth_year;       // 입력받은 태어난 년도
  int year[100];        // 각 사람들의 생년 (최대 100명) 
  int count_person=0;     // 입력된 인원 수
  int count_baby=0;       // 유아 수
  int count_child=0;      // 어린이 수
  int count_youth=0;      // 청소년 수
  int count_young=0;      // 청년 수
  int count_adult=0;      // 중년 수
  int count_old=0;        // 노년 수
  int i=0;                // 반복문을 위한 변수
  int age;
  
  while(1){
    printf("%d번째 사람의 태어난 년도를 입력하시오. ", i+1);
    scanf("%d", &birth_year);
    if(birth_year > 2022) break;
    year[i] = birth_year;
    i++;
    count_person++;
    
    age = 2022 - birth_year + 1;
    if(age < 7) count_baby++;
    else if(age < 13) count_child++;
    else if(age < 20) count_youth++;
    else if(age < 30) count_young++;
    else if(age < 60) count_adult++;
    else count_old++;
  }
  for(i=0; i<count_person; i++){
    age = 2022 - year[i] + 1;
    printf("%d번째 사람의 나이는 %d입니다.\n", i+1, age);
  }
  printf("유아는 %d명입니다.\n", count_baby);
  printf("어린이는 %d명입니다.\n", count_child);
  printf("청소년은 %d명입니다.\n", count_youth);
  printf("청년은 %d명입니다.\n", count_young);
  printf("중년은 %d명입니다.\n", count_adult);
  printf("노년은 %d명입니다.\n", count_old);
  return 0;
}
