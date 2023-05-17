#include <stdio.h>

int main(){
	int coin, price, result;
	printf("투입한 돈: ");
	scanf("%d", &coin);

	printf("물건 값: ");
	scanf("%d", &price);

	result = coin - price;
	printf("거스름돈: %d\n\n", result);

	int coin500 = result / 500;
	printf("500원 동전의 개수: %d\n", coin500);
	result = result % 500;
	int coin100 = result / 100;
	printf("100원 동전의 개수: %d\n", coin100);
	result = result % 100;
	int coin10 = result / 10;
	printf("10원 동전의 개수: %d\n", coin10);

	return 0;
}
