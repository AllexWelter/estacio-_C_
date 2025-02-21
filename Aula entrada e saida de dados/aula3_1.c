#include <stdio.h>


int main(){
    
    int idade;
    float altura;
    char opcao;
    char nome[20];
    //sintaxe scanf
    //scanf("formato1" "formato2", &variavel1, variavel2, ...);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade e: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura e: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome); //nao precisou do & pois trata-se de string 
    printf("Seu nome e: %s\n", nome);
}
