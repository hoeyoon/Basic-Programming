#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* to_str(int* size, unsigned int* a){
  char* r;
  r = (char*)malloc((char*)a*sizeof(char));
  for(int i = 0; i < 3; i++){
    
  }
  
  return r;
}


int main(){
	unsigned int arr[3];
	scanf("%u %u %u", arr, arr+1, arr+2);
	
	int str_size;
	char *str = to_str(&str_size, arr);
	printf("str_size: %d\n", str_size);
	printf("%s\n", str);
	free(str);
	return 0;
}