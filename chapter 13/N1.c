#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	
	int* iptr;
	iptr = (int*)malloc(size*sizeof(int));
	
	printf("Enter %d numbers: ", size);
	for(int i = 0; i < size; i++){
		scanf("%d", &iptr[i]);
	}
	
	int find_num;
	printf("Find: ");
	scanf("%d", &find_num);
	
	int count = 0;
	for(int i = 0; i < size; i++){
		if(iptr[i] == find_num){
			count++;
		}
	}
	printf("%d number of %d\n", count, find_num);
	return 0;
}