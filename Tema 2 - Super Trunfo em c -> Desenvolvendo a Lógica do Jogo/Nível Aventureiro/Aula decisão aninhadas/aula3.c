#include <stdio.h>

int main(){

    int idade;
    float renda;

    // if(condicao1) {
    //     if (condicao2) {
    //         //Código a ser executado se condicao1 e condicao2 forem verdadeiras
    //     } else {
    //  }
    // }

    //programa que verifica se uma pessoa está qualificada para um desconto especia com base na idade e na renda mensal. A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000.

    printf("Digite a sua idade: ");
    scanf(" %d", &idade);
    printf("Digite a sua renda: ");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60) {
        if (renda < 2000) {
            printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direito ao desconto devido à renda!\n");
        }
    } else {
        printf("Você não tem direito ao desconte especial devido à idade!\n");
    }

    return 0;
}