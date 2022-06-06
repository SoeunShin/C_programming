#include <stdio.h>

int powerOfTwo(int n);

int main(void) {
  int power;
  while(1){
    printf("숫자 입력 (0 종료) : ");
    scanf("%d", &power);
    if(power == 0) break;
    printf("2의 %d승은 %d\n", power, powerOfTwo(power));
  }
  return 0;
}

int powerOfTwo(int n){
  if(n == 0)
    return 1;
  else return (2 * powerOfTwo(n-1));
}