#include <stdio.h>

int main(){
	int year, month, day;
	scanf("%d %d", &year, &month);
	switch(month){
		case 2:
			day = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		default:
			day = 31;
			break;
	}
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("%d\n", day+1);
	}
	else{
		printf("%d\n", day);
	}
	return 0;
}
