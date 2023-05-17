#include <stdio.h>

void mystr(char* a){
	while(1){
		if(*a == '.' || *a == '?' || *a == '!'){
			break;
		}
	a++;
	}
	*(a+1) = '\0';
}

int main(){
	char str[512];
	scanf("%[^\n]s", str);

	mystr(str);
 	printf("%s\n", str);
	return 0;
}
