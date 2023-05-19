#include <stdio.h>

void pswd(char* x){
  int count = 0;
  while(x[count] != '\0'){
    count++;
  }
  while(1){
    if(count > 8 && 'a' < *x && *x < 'z' && 'A' < *x && *x < 'Z' && 1 < *x && *x < 9){
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