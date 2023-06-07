#include <stdio.h> 
#include <string.h> 
  
void reverse(char* a){ 
  int len = strlen(a); 
  //printf("%d\n", len); 
  char output[128]; 
  for(int i = 0; i < len; i++){ 
    output[i] = a[len - (i + 1)]; 
  } 
  //printf("%s\n", output); 
  strcpy(a, output); 
  *(a+len) = '\0'; 
} 
  
void change_string(char* a, char* b){ 
  int len = b - a + 1;

  char output[128]; 
  printf("move = [%c]\n", *b); 
  for(int i = 0; i < len; i++){
    output[i] = *(a + i);
  }
  for(int i = 0; i < len; i++){
    *(a + i) = *(b + 1 + i);
  }
  for(int i = 0; i < len; i++){
    *(b - len + 1 +i) = output[i];
  }
  
  //printf("%s 1\n", output); 
} 
  
  
int main(){ 
  char in[128]; 
  scanf("%s", in); 
  
  int s, m; 
  scanf("%d %d", &s, &m); 
  
  reverse(in); 
  printf("%s\n", in); 
  change_string(in + s, in + m); 
  printf("%s\n", in); 
  return 0; 
}
