#include <stdio.h>

void pswd(char* x){
  while(x != '\0'){
    if('a' < *x && *x < 'z' && 'A' < *x && *x < 'Z' && 1 < *x && *x < 9){
      break;
    }
  }
}


int main(){
  char x[102];

  while(1){
    printf("Enter password: ");
    scanf("%s", x);
    pswd(x);
  }

  return 0;
}