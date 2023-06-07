#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* to_str(int* size, unsigned int* a){
  int len = 0;

  for(int i = 0; i < 3; i++){
    unsigned int temp = a[i];
    int digits = 1;

    while(temp /= 10){
      digits++;
    }

    len += digits;
    if(i < 2){
      len++;
    }
  }
  char* r = (char*)malloc((len+1)*sizeof(char));
  int index = 0;

  for(int i = 0; i < 3; i++){
    int digits = snprintf('\0', 0, "%u", a[i]);
    sprintf(r+index, "%u", a[i]);
    index+=digits;
    if(i < 2){
      sprintf(r+index, " ");
      index++;
    }
  }
  *size = index;
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