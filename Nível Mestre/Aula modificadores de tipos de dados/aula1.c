//modificadores de tipos de dados ---> unsigned, signed, long, short


// UNSIGNED
#include <stdio.h>

int main() {

    int numeroSinal = 3000000000; //este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    return 0;

}

