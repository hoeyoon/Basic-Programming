#include <stdio.h>

int main(){
  int x, y, z;
  printf("3���� ������ �Է��ϼ���.\n");

  printf("���� 1 : ");
  scanf("%d", &x);

  printf("���� 2 : ");
  scanf("%d", &y);

  printf("���� 3 : ");
  scanf("%d", &z);

  printf("�� �� ���� ��� ����� %d�Դϴ�.\n", x + y - z);

  return 0;
}