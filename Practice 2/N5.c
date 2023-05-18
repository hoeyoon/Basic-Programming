#include <stdio.h>

int main(){
  int x[3], temp;
  for(int i = 0; i < 3; i++){
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(x[i] < x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
  for(int i = 2; i >= 0; i--){
    printf("%d ", x[i]);
  }
  printf("\n");

  return 0;
}