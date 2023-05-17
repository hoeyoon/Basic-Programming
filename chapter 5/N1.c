#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);

	if(x % 3 == 0 && x % 4 == 0 && x > 0){
		printf("YES\n");
	}
	else if(x > 0){
		printf("NO\n");
	}
	else{
		printf("Wrong input\n");
	}
	return 0;
}
