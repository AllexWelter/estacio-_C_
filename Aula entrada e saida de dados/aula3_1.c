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
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome); //nao precisou do & pois trata-se de string 
    printf("Seu nome é: %s\n", nome);
}
