#include <stdio.h>

typedef struct{
  double rnum;
  double inum;
} complex_num;

complex_num addcomplxe_num(complex_num a, complex_num b){
  complex_num r;
  r.rnum = a.rnum + b.rnum;
  r.inum = a.inum + b.inum;
  return r;
}

int main(){
  complex_num x, y, sum = {0 , 0};
  scanf("%lf+%lfi", &x.rnum, &x.inum);
  scanf("%lf+%lfi", &y.rnum, &y.inum);

  sum = addcomplxe_num(x, y);

  printf("%.2lf+%.2lfi\n", sum.rnum, sum.inum);
  return 0;
}