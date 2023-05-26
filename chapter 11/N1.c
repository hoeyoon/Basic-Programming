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
	
	int a_sec = a.hour*3600 + a.min*60 + a.sec;
	int b_sec = b.hour*3600 + b.min*60 + b.sec;

	int sum = 0;
	if(a_sec > b_sec){
		sum = a_sec - b_sec;
	}
	else{
		sum = b_sec - a_sec;
	}
	
	printf("%d %d %d\n", sum/3600, (sum%3600)/60, (sum%3600)%60);
	return 0;
}