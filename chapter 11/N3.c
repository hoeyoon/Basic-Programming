#include <stdio.h>

typedef struct{
  float rnum;
  float inum;
} complex_num;

int main(){
  complex_num x, y;
  scanf("%f+%fi", &x.rnum, &x.inum);
  scanf("%f+%fi", &y.rnum, &y.inum);

  double result_rnum, result_inum;

  result_rnum = x.rnum + y.rnum;
  result_inum = x.inum + y.inum;

  printf("%.2f+%.2fi\n", result_rnum, result_inum);
  return 0;
}