#include <stdio.h>

int main(){
	int x, count = 0, num = 2;;
	scanf("%d", &x);
    
	while(count < x){
		int y = 0;
        	for(int i = 1; i <= num; i++){
			if(num % i == 0){
	      			y++;
			}
		}
		if(y <= 2){
			printf("%d ", num);
			count++;
		}
		num++;
	}
	printf("\n");
	return 0;
}
