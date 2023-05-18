#include <stdio.h>

int main(){
  int x, y, z;
  printf("3개의 정수를 입력하세요.\n");

  printf("정수 1 : ");
  scanf("%d", &x);

  printf("정수 2 : ");
  scanf("%d", &y);

  printf("정수 3 : ");
  scanf("%d", &z);

  printf("이 세 값의 계산 결과는 %d입니다.\n", x + y - z);

  return 0;
}