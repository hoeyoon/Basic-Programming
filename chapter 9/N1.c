#include <stdio.h>

void swap(int* px, int* py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;	
}

int main(){
	int v[10];
	int count = 0;
	int x;
	
	while(count < 10){
		scanf("%d", &x);
		if(1 <= x && x <= 50){
			v[count] = x;
			count++;
		} 
		else {
			continue;
		}
	}
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 10; j++){
			if(*(v+i) > *(v+j)){
				swap(&v[i], &v[j]);
			}
		}
	}
	for(int i = 0; i < 10; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}