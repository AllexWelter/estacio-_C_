#include <stdio.h>

//LONG
int main(){

    int numerNormal = 2147483647; //valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular(int): %d\n", numerNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; //valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    return 0;
    

}