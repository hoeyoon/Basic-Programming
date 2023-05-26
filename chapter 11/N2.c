#include <stdio.h>

typedef struct{
	char name[64];
	int number[64];
	char phone[64];
	int age[64];
} employee;

int main(){
	employee a[10] = {{"Jeon", 123, "2345-7890", 32}, {"Kim", 125, "3458-9990", 22}, {"Lee", 133, "7345-9870", 45}, {"Bae", 140, "5321-1234", 54}, {"Kang", 205, "4916-5052", 48}, {"Lee", 245, "2039-3458", 25}, {"Kim", 777, "4708-2323", 34}, {"Smith", 900, "6408-3298", 39}, {"Park", 428, "3482-9283", 21}, {"Kim", 973, "8934-2738", 25}};
	int x, z;
	char y;
	scanf("%d", &x);

	/*if(x == 1){
		scanf("%c", &y);
		for(int i = 0; i < 10; i++){
			if(){

			}
		}
	}*/

	if(x == 2){
		scanf("%d", &z);
		for(int i = 0; i < 10; i++){
			if(z == a.numeber[i]){
				printf("%s %d %s %d\n", a.name[i], a.number[i], a.phone[i], a.age[i]);
			}
		}
	}
	
	
	
	return 0;
}
