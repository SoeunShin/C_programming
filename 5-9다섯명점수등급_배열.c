#include <stdio.h> 
/*
  1. 5번 큰 반복
    1-1. 10번 큰 반복
      1-1-1. 학생별 답안 내용을 정답과 비교하여 점수를 계산
    1-2. 점수 >= 9 ----> 1등급
         점수 >= 7 ----> 2등급
         나머지 ----> fail
  2. 1등급 학생 결과
  3. 5번 반복
    3-1. 1등급이면
      3-1-1. 이름 출력
      3-1-2. 인원수++
  4. 1등급 인원수 출력
  5. 2등급 학생 결과
  6. 5번 반복
    6-1. 2등급이면
      6-1-1. 이름 출력
      6-1-2. 인원수++
  7. 2등급 인원수 출력
  8. fail 학생 결과
  9. 5번 반복
    9-1. fail이면
      9-1-1. 이름 출력
      9-1-2. 인원수++
  10. fail 인원수 출력
*/
int main(void) {
  int i, j; // 반복문을 위한 변수
  int jumsu = 0; // 점수 게산용 점수
  int count = 0; // 인원수 계산용 변수
  char names[5][20]={"James", "David", "Simon", "Peter", "Jason"}; // 학생 이름 
  int sheet[5][10]; // 학생별 답안내용
  int answer[10]={1,2,3,4,1,2,3,4,3,2}; // 정답순서
  int grade[5]; // 학생별 등급

  for(i = 0; i < 5; i++){
    printf("Enter %s's sheet >> ", names[i]); 
    for(j = 0; j < 10; j++){
      scanf("%d", &sheet[i][j]); //i번째 학생의 답안 10개입력
		}
  }
  
  // 이 부분에 코드를 작성할 것! ()
  for(i=0; i<5; i++){
    for(j=0; j<10; j++){
      if(sheet[i][j] == answer[j]) jumsu++;
    }
    if(jumsu >= 9) grade[i] = 1;
    else if(jumsu >= 7) grade[i] = 2;
    else grade[i] = 0;
    jumsu = 0;
  }

  printf("\nGrade result\n");
  printf("1st : ");
  for(i=0; i<5; i++){
    if(grade[i] == 1) {
      printf("%s ", names[i]);
      count++;
    }
  }
  printf("(%d)\n", count);
  count = 0;
  
  printf("2nd : ");
  for(i=0; i<5; i++){
    if(grade[i] == 2) {
      printf("%s ", names[i]);
      count++;
    }
  }
  printf("(%d)\n", count);
  count = 0;
  
  printf("Fail : ");
  for(i=0; i<5; i++){
    if(grade[i] == 0) {
      printf("%s ", names[i]);
      count++;
    }
  }
  printf("(%d)\n", count);
  
  return 0; 
}