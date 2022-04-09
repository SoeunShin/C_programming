#include<stdio.h>
#include <string.h>
/*
  1. firstname 입력받기 
  2. lastname 입력받기
  3. birthyear 입력받기 
  4. age 계산
  5. 연령대를 구분하고, result에 이어붙임
    -> 20세 미만: Youth
    -> 40세 미만: Junior
    -> 65세 미만: Senior
    -> 나머지: Silver 
  6. firstname을 result에 이어붙임
  7. lastname을 result에 이어붙임
  8. 결과 출력 
*/
int main(void){
  char firstname[30];
  char lastname[30];
  char age_group[4][30] = {"[Youth]","[Junior]","[Senior]","[Silver]"}; 
  int birthyear;
  int age;
  char result[100] = "";
  
  printf("Firstname? ");
  scanf("%s", firstname);
  printf("Lastname? ");
  scanf("%s", lastname);
  printf("Birthyear? ");
  scanf("%d", &birthyear);

  age = 2022 - birthyear + 1;

  if(age < 20) strcat(result, age_group[0]);
  else if(age < 40) strcat(result, age_group[1]);
  else if(age < 65) strcat(result, age_group[2]);
  else strcat(result, age_group[3]);

  strcat(result, " ");
  strcat(result, firstname);
  strcat(result, " ");
  strcat(result, lastname);
  
  printf("결과 : %s\n", result);
  return 0;
}