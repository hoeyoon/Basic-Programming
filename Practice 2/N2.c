#include <stdio.h>

int main(){
  int x, y;
  scanf("%d %d", &x, &y);

  if(x > y && x > 0 && y > 0){
    printf("%d\n", (x/y)+(x%y));
  }
  else if(y > x && x > 0 && y > 0){
    printf("%d\n", (y/x)+(y%x));
  }
  else{
    printf("-1\n");
  }
  return 0;
}