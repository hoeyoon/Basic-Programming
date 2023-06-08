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
  
void change_string(char* ptr, char* str){
   printf("move = [%c]\n", *(str));
  char a[512];
  *a = *str;
   for(int i = 0; i <= &str[0]-&ptr[0]; i++){
    *(str-i) = *(str-i-1);
   }
  *ptr = *a;
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
