#include <stdio.h>

int main(){
  int x;
  while(1){
    printf("10���� ũ�� 100���� ���� ������ �Է��ϼ���: ");
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