#include <stdio.h>

int main(){
    int numero;
    int resultado;


    numero = 11;
    resultado = numero % 2;

    printf("Sobra de resultado: %d\n", resultado);

    if(resultado % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é impar\n");
    }

    return 0;
}