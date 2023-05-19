#include <stdio.h>
#include <string.h>

int main(){
  char x[10][100];
  char y[100];
  int count = 0;
  for(int i = 0; i < 10; i++){
    scanf("%s", x[i]);
  }

  printf("Find: ");
  scanf("%s", y);

  for(int i = 0; i < 10; i++){
    if(strcmp(x[i], y) == 0){
      count++;
    }
  }
  printf("%d number of %s\n", count, y);
  return 0;
}