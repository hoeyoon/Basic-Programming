#include <stdio.h>

int main(){
    int x[10], temp;
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(int i = 9; i >= 0; i--){
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}