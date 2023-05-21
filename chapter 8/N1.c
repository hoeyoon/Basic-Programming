#include <stdio.h>

int fac(int x){
  int sum = 1;
  for(int i = 1; i <= x; i++){
    sum = sum * i;
  }
  return sum;
}

int main(){
  int x;
  scanf("%d", &x);

  printf("%d\n", fac(x));
  return 0;
}