//EXEMPLO COM DO WHILE

#include <stdio.h>

int main(){

    int i = 1;

    do{ //Loop externo
        int j = 1; //Variável local
        do { //Loop interno 
            printf("%d\t", i * j);
            j++; //Incremento loop interno
        } while(j <= 10); //Condição interno
        printf("\n");
        i++; //Incremento loop externo
    } while(i <= 10); //Condição externa


    return 0;
}