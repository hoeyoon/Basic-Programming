#include <stdio.h>

int goodnumber(int num, int* a, int n){
  int i, j, k;
  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      for(k = j + 1; k < n; k++){
        if(a[i] + a[j] + a[k] == num){
          return 1;
        }
      }
    }
  }
  return 0;
}

int main(){
  int x;
  scanf("%d", &x);
  int num[x];
  for(int i = 0; i < x; i++){
    scanf("%d", &num[i]);
  }

  int count = 0;
  for(int i = 0; i < x; i++){
    if(goodnumber(num[i], num, x) == 1){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}