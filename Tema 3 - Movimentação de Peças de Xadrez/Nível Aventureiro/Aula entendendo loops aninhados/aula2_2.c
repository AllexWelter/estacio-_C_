#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){ //Loop externo
        for(int j = 1; j <= 10; j++){ //Loop interno
            printf("%d x %d = %d\n",i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}