#include <stdio.h>

void swap(){}

void sort_array(int* v, int n, int m){
  int temp;
  for(int i = 0 ; i < n; i++){
    for(int j = 0; j < n; j++){
      if(m == 0){
        if(v[i] < v[j]){
          temp = v[i];
          v[i] = v[j];
          v[j] = temp;
        }
      }
      else if(m == 1){
        if(v[i] > v[j]){
          temp = v[i];
          v[i] = v[j];
          v[j] = temp;
        }
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d ", *(v+i));
  }
  printf("\n");
}

int main(){
  int n, m, v[10];
  scanf("%d %d", &n, &m);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
  sort_array(v, n, m);
  return 0;
}