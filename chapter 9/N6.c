#include <stdio.h>

void swap(int* a, int* b){
  int temp;
  temp  = *a;
  *a = *b;
  *b = temp;
}

void sort_array(int* v, int n, int m){
  if(m == 0){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(v[i] < v[j]){
          swap(&v[i], &v[j]);
        }
      }
    }
  }
  if(m == 1){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(v[i] > v[j]){
          swap(&v[i], &v[j]);
        }
      }
    }
  }
}

int main(){
  int v[10];
  int n, m;

  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
  
  sort_array(v, n, m);
  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}