#include <stdio.h>

int main(){
  float x;
  printf("�Ǽ��� �Է� ");
  scanf("%f", &x);

  printf("�� %d\n", (int)x / 5);
  printf("������ %f\n", x - ((int)x / 5) * 5);

  return 0;
}