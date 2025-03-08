#include <stdio.h>


int main(){

    int numero;

    do {

       printf("Digite um número PAR para sair do programa... \n");
       scanf("%d", &numero);

       if(numero % 2 == 0){
        printf("%d é PAR! \n", numero);
       } else {
        printf("%d é ÍMPAR! \n", numero);
       }

    } while (numero % 2 != 0);
    
    printf("Você digitou um número PAR, saindo do programa... \n");

    return 0;
}