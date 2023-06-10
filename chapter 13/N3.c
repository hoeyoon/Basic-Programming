#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* to_int_array(int* psize, char* x){
  int* r;
  r = (int*)malloc(strlen(x)*sizeof(int));
  char* tok = strtok(x, " ");

  int count = 0;

  while(tok != '\0'){
    
    r[count] = atoi(tok);
    count++;
    tok = strtok('\0', " ");
  }
  *psize = count;
  return r;
}

int main(){
	char str[256];
	scanf("%[^\n]", str);
	//printf("%s\n", str);
	
	int* array;
	int size;
	array = to_int_array( &size, str);
	printf("size: %d\n", size);
	for( int i = 0 ; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	return 0;
}