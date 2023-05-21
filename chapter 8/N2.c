#include <stdio.h>

int fac(int x){
  int sum = 1;
  if(x > 1){
    return x * fac(x - 1);
  }
  return 1;
}

int main(){
  int x;
  scanf("%d", &x);

  printf("%d\n", fac(x));
  return 0;
}