#include <stdio.h>

int main(){

    int idade;
    float renda;
    int dependentes;

    // A primeira condição idade do usuário está entre 18 e 65 anos.
    // A segunda condição se a renda do usuário é menor que 3000.
    // A terceira condição verifica se o número de dependentes é maior que 2.

    printf("Digite a sua idade ");
    scanf(" %d", &idade);
    printf("Digite a sua renda: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf(" %d", &dependentes);

    if(idade >= 18 && idade <= 65) {
        // printf("Você tem direito ao benefício por conta da idade!\n");
        if(renda < 3000) {
            if(dependentes > 2) {
                printf("Você tem direito ao benefício atendendendo a todos os critérios!\n");
            } else {
                printf("você não tem direito ao benefício por conta do número de dependentes!\n");
            }
            // printf("Você tem direito ao benefício por renda!\n");
        } else {
            printf("Você não tem direito ao benefício por renda!\n");
        }
    } else {
        printf("Você não tem direito ao benefício por conta da idade!\n");
    }

    return 0;
}