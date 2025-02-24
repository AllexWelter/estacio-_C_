#include <stdio.h>

int main(){

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Allex";

    printf("A idade do %s e: %d\n", nome, idade);
    printf("A altura e: %.2f\n", altura);
    printf("A opcao e: %c\n", opcao);

}

// printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

// A seguir, você tem uma lista dos principais especificadores utilizados:


// %d: Imprime um inteiro no formato decimal.
 
// %i: Equivalente a %d.
 
// %f: Imprime um número de ponto flutuante no formato padrão.
 
// %e: Imprime um número de ponto flutuante na notação científica.
 
// %c: Imprime um único caractere.
 
// %s: Imprime uma cadeia (string) de caracteres.