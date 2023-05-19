#include <stdio.h>

int main(){
    int x[9], y;

    scanf("%d", &y);
    for(int i = 0; i < 9; i++){
        x[i] = y*(i+1);
        printf("%d X %d = %d\n", y, i+1, x[i]);
    }

    return 0;
}