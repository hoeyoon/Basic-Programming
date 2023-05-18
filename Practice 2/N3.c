#include <stdio.h>

int main(){
  int x, cycle = 0;
  scanf("%d", &x);
  while(x > 0){
    if(x % 2 == 1){
      x = (2 * x) - 2;
      cycle++;
    }
    else if(x % 2 == 0){
      x = x / 2;
      cycle++;
    }
    printf("%d ", x);
  }
  printf("\ncycle : %d\n", cycle);
  return 0;
}