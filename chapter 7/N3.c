#include <stdio.h>

int main(){
    int x[10], max, count = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    max = x[0];
    for(int i = 0; i < 10; i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    for(int i = 0; i < 10; i++){
        if(x[i] == max){
            count = i;
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}