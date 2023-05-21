#include <stdio.h>

int main(){
  int temp;
  int num[6];
  
  for(int i = 0; i < 6; i++){
    scanf("%d", &num[i]);
  }

  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      if(num[i] < num[j]){
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  
  for(int i = 0; i < 6; i++){
    printf("%d ", num[i]);
  }
  printf("\n");
  return 0;
}