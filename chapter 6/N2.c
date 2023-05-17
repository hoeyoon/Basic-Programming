#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	printf("1");
	for(int i = 1; i <= x; i++){
		printf("*%d", i);
	}
	printf("\n");
	return 0;
}
