#include <stdio.h>

int main(){
  int n[5];
  int* pt = n;
  for(int i = 0; i < 5; i++){
    scanf("%d", &n[i]);
  }
  int sum = 0;
  for(int i = 0; i < 5; i++){
    sum+=*(pt+i); 
  }
  printf("%d\n", sum);
  
  return 0;
}