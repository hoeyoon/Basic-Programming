#include <stdio.h>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if(x<y && y<z){//x<y<z
		printf("%d\n", y);
	}
	else if(x<z && z<y){//x<z<y
		printf("%d\n", z);    
	}
	else if(y<x && x<z){//y<x<z
		printf("%d\n", x);
	}
	else if(y<z && z<x){//y<z<x
		printf("%d\n", z);
	}
	else if(z<y && y<x){//z<y<x
		printf("%d\n", y);
	}
	else if(z<x && x<y){//z<x<y
		printf("%d\n", x);
	}
	return 0;
}
