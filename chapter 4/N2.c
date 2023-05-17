#include <stdio.h>

int main(){
	int x, year;
	double money;;
	printf("투자원금 : ");
	scanf("%lf", &money);

	printf("이율(%) : ");
	scanf("%d", &x);

	printf("투자기간 : ");
	scanf("%d", &year);

	for(int i = 1; i <= year; i++){
		money = money *(x+100)/100;
	}
	printf("%d년 후의 원리금 = %lf\n", year, money);
	return 0;
}
