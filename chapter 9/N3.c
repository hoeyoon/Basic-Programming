#include <stdio.h>
#include <math.h>

double get_array_avg(int* v, int n){
  int r = 0;
  for(int i = 0; i < n; i++){
    r+=v[i];
  }
  return (double)r / n;
}

double get_array_std(int* v, double avg, int n){
  double r = 0;
  for(int i = 0; i < n; i++){
    r+=pow(v[i] - avg, 2);
  }
  return sqrt(r / n);
}

int main(){
  int v[5];
  for(int i = 0; i < 5; i++){
    scanf("%d", &v[i]);
  }
  double avg = get_array_avg(v, 5);
  printf("%.2lf ", avg);
  printf("%.2lf\n", get_array_std(v, avg, 5));
  return 0;
}