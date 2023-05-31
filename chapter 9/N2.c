#include <stdio.h>

int main(){
  int n[5];
  int result = 0;

  for(int i = 0; i < 5; i++){
    scanf("%d", &n[i]);
  }
  for(int i = 0; i < 5; i++){
    result+=*(n+i);
  }
  printf("%d\n", result);
  return 0;
}