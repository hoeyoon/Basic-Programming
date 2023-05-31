#include <stdio.h>

void swap(int* px, int* py){
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

int main(){
  int x, n[10];

  int count = 0;
  while(count < 10){
    scanf("%d", &x);
    if(1 <= x && x <= 50){
      n[count] = x;
      count++;
    }
    else{
      continue;
    }
  }
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(n[i] < n[j]){
        swap(&n[i], &n[j]);
      }
    }
  }
  for(int i = 0; i < 10 ; i++){
    printf("%d ", n[i]);
  }
  printf("\n");
  return 0;
}