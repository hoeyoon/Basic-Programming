#include <stdio.h>

int main(){
	float x, y, pi = 3.14;
	scanf("%f %f", &x, &y);

	printf("%.2f\n", pi*x*x*(y/360));
	return 0;
}
