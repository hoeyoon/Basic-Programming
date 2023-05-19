#include <stdio.h>

int main(){
  float x;
  printf("실수수값 입력 ");
  scanf("%f", &x);

  printf("정수 %d\n", (int)x / 5);
  printf("나머지 %f\n", x - ((int)x / 5) * 5);

  return 0;
}