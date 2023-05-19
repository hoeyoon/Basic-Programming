#include <stdio.h>

int main(){
    int x[30], y, sum = 0;
    scanf("%d", &y);
    for(int i = 0; i < y; i++){
        scanf("%d", &x[i]);
        sum += x[i];
    }
    printf("%d\n", sum/y);
    return 0;
}