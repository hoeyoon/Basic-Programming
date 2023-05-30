#include <stdio.h>

int get_array_sum(int* v, int size){
  int r = 0;
  for(int i = 0; i < size; i++){
    r+=v[i];
  }
  return r;
}

int main(){
  int v[5];
  for(int i = 0; i < 5; i++){
    scanf("%d", &v[i]);
  }
  printf("%d\n", get_array_sum(v, 5));
  return 0;
}