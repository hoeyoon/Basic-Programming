#include <stdio.h>

int main(){
  float x, y, z;
  printf("number 1: ");
  scanf("%f", &x);

  printf("number 2: ");
  scanf("%f", &y);

  printf("number 3: ");
  scanf("%f", &z);

  printf("%d %f\n", (int)x, x);
  printf("%d %f\n", (int)y, y);
  printf("%d %f\n", (int)z, z);
  
  return 0;
}