#include <stdio.h>

int main(){
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	int n100 = x / 100;
	printf("백의 자리수: %d\n", n100);
	x = x % 100;
	int n10 = x / 10;
	printf("십의 자리수: %d\n", n10);
	x = x % 10;
	printf("일의 자리수: %d\n", x);

	return 0;
}
