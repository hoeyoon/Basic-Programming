#include <stdio.h>

int pswd(char* x){
  int a = 0;
  int b = 0;
  int c = 0;
  int count = 0;
  while(*x != '\0'){
    if('A' <= *x && *x <= 'Z'){
      a++;
    }
    else if('a' <= *x && *x <= 'z'){
      b++;
    }
    else if('0' <= *x && *x <= '9'){
      c++;
    }
    x++;
    count++;
  }
  if(count >= 8 && a >= 1 && b >= 1 && c >= 1){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  char x[100];
  while(1){
    printf("Enter password: ");
    scanf("%s", x);
    if(pswd(x) == 1){
      break;
    }
  }
  printf("New password is %s\n", x);
  return 0;
}