#include <stdio.h>

int main(){
    int numero, resultado;

    numero = 4;
    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if(numero % 2 == 0){
        printf("O número é par\n");
    }

    return 0;
}