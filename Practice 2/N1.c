#include <stdio.h>

int main(){
  double x, mile = 1.609344;
  scanf("%lf", &x);
  printf("%.2lf\n", x / mile);
  
  return 0;
}