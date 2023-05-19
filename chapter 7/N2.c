#include <stdio.h>

int main(){
    int x[5], temp, count = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &x[i]);
    }
    temp = x[0];
    for(int i = 0;i < 5; i++){
        if(x[i] > temp){
            temp = x[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(temp == x[i]){
            count++;
        }
    }
    printf("%d %d\n", temp, count);
    return 0;
}