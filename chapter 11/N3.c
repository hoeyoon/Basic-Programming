#include <stdio.h>

typedef struct{
  double rnum;
  double inum;
} complex_num;

int main(){
  complex_num x, y;
  char z, h;
  scanf("%lf%c%lf%c", &x.rnum, &z, &x.inum, &h);
  scanf("%lf%c%lf%c", &y.rnum, &z, &y.inum, &h);

  double result_rnum, result_inum;

  result_rnum = x.rnum + y.rnum;
  result_inum = x.inum + y.inum;

  printf("%.2lf%c%.2lf%c\n", result_rnum, z, result_inum, h);
  return 0;
}