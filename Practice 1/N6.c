#include <stdio.h>

int main(){
  int x;
  while(1){
    printf("10보다 크고 100보다 작은 정수를 입력하세요: ");
    scanf("%d", &x);
    if(10 < x && x < 100){
      break;
    }
  }
  for(int i = 1; i <= x; i++){
    if(i % 3 == 0){
      printf("%d ", i);
    }
  }

  return 0;
}