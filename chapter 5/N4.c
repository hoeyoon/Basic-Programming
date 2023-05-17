#include <stdio.h>

int main(){
	char x;
	scanf("%c", &x);
	if('A' <= x && x <= 'Z'){
		printf("대문자\n");
	}
	else if('a' <= x && x <= 'z'){
		printf("소문자\n");
	}
	else{
		printf("영문자 아님\n");
	}
	return 0;
}
