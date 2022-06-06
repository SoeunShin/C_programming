#include <stdio.h>

int power( int n, int a );

int main(void) {
  int n1, n2;
  printf("숫자 2개를 입력 ");
  scanf("%d %d", &n1, &n2);
  printf("%d의 %d승은 %d\n", n1, n2, power(n1, n2));
  return 0;
}

int power( int n, int a ){
  if(a == 0)
    return 1;
  else if(a == 1)
    return n;
  else if(a>0 && a%2==0)
    return power(n, a/2) * power(n, a/2);
  else if(a>1 && a%2==1)
    return power(n, a/2) * power(n, a/2) * n;
  return 0;
}