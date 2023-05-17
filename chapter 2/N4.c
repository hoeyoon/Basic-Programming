#include <stdio.h>

int main(){
	int min, sec;
	printf("Minutes? ");
	scanf("%d", &min);

	printf("seconds? ");
	scanf("%d", &sec);

	printf("%d seconds\n", (60*min)+sec);
	return 0;
}
