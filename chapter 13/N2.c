#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* copy(char* a){
	int* ptr;
	ptr = (int*)malloc(strlen(a)*sizeof(int));
	int i = 0;
	while(a[i] != '\0'){
		ptr[i] = a[i];
		i++;
	}
	return ptr;
}

int main(){
	char str[256];
	scanf("%[^\n]s", str);
	//printf("%s\n", str);
	
	int* c = copy(str);
	
	int i = 0;
	while(c[i] != 0){
		printf("%c", c[i]);
		i++;
	}
	printf("\n");
	free(c);
	return 0;
}