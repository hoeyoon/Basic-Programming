#include <stdio.h>

int main(){
  int num[100][100];
  int x, sum = 0;

  scanf("%d", &x);

  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      num[i][j] = i * x + j + 1;
    }
  }
  for(int i = 0; i < x; i++){
    sum += num[i][i];
  }
  printf("%d\n", sum);

  return 0;
}