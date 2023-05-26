#include <stdio.h>
#include <string.h>

typedef struct{
	char name[64];
	int number;
	char phone[64];
	int age;
} employee;

int main(){
	employee a[10] = {{"Jeon", 123, "2345-7890", 32}, {"Kim", 125, "3458-9990", 22}, {"Lee", 133, "7345-9870", 45}, {"Bae", 140, "5321-1234", 54}, {"Kang", 205, "4916-5052", 48}, {"Lee", 245, "2039-3458", 25}, {"Kim", 777, "4708-2323", 34}, {"Smith", 900, "6408-3298", 39}, {"Park", 428, "3482-9283", 21}, {"Kim", 973, "8934-2738", 25}};
	int x, z, m;
	char y[64];
	scanf("%d", &x);
	if(x == 1){
		scanf("%s", y);
		for(int i = 0; i < 10; i++){
			if(strcmp(a[i].name, y) == 0){
				printf("%s %d %s %d\n", a[i].name, a[i].number, a[i].phone, a[i].age);
			}
		}
	}

	if(x == 2){
		scanf("%d", &z);
		for(int i = 0; i < 10; i++){
			if(a[i].number == z){
				printf("%s %d %s %d\n", a[i].name, a[i].number, a[i].phone, a[i].age);
			}
		}
	}

	if(x == 3){
		scanf("%s", y);
		for(int i = 0; i < 10; i++){
			if(strcmp(a[i].phone, y) == 0){
				printf("%s %d %s %d\n", a[i].name, a[i].number, a[i].phone, a[i].age);
			}
		}
	}

	if(x == 4){
		scanf("%d %d", &z, &m);
		for(int i = 0; i < 10; i++){
			if(z <= a[i].age && a[i].age <= m){
				printf("%s %d %s %d\n", a[i].name, a[i].number, a[i].phone, a[i].age);
			}
		}
	}
	
	return 0;
}