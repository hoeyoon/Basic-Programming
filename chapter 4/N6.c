#include <stdio.h>

int main(){
	double x, y;
	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	printf("정수부의 합 = %d\n", (int)x + (int)y);
	return 0;
}
