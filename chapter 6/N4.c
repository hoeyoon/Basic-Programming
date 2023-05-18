#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);

	for(int i = x; i > 0; i--){
		if(i % 2 != 0){
			for(int j = 1; j < (i/2) + 1; j++){
				printf("-");
			}
			for(int j = 1; j <= (x-i) + 1; j++){
				printf("*");
			}
			for(int j = 1; j < (i/2) + 1; j++){
				printf("-");
			}
			printf("\n");
		}
	}
	return 0;
}
