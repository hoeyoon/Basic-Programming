#include <stdio.h>

typedef struct{
	int hour;
	int min;
	int sec;
} time;

int main(){
	time a, b;
	int hour, min, sec;
	scanf("%d %d %d", &a.hour, &a.min, &a.sec);
	scanf("%d %d %d", &b.hour, &b.min, &b.sec);
	
	if(a.hour > b.hour){
		hour = a.hour - b.hour;
	}
	else{
		hour = b.hour - a.hour;
	}
	
	if(a.min > b.min){
		min = a.min - b.min;
	}
	else{
		min = b.min - a.min;
	}
	
	if(a.sec > b.sec){
		sec = a.sec - b.sec;
	}
	else{
		sec = b.sec - a.sec;
	}
	printf("%d %d %d\n", hour, min, sec);
	return 0;
}
