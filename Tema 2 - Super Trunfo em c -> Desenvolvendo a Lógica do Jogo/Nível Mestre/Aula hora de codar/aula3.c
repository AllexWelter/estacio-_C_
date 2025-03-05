//Jogo Maior,Menor ou Igual contra o pc

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do Jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    //Exibir o número do computador
    // printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;    
    case 'I':
    case 'i':
    printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;    
        break;
    default:
        printf("Opção de jogo inválida!\n");
        break;
    }

    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if(resultado == 1) {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
    return 0;
}




//switch com if-else
// switch (tipoComparacao)
//     {
//     case 'M':
//     case 'm':
//         if(numeroJogador > numeroComputador){
//             printf("O número do jogador é maior, VOCÊ GANHOU!\n");
//         } else {
//             printf("O número do computador é maior, VOCÊ PERDEU!\n");
//         }
//         break;
//     case 'N':
//     case 'n':
//         if(numeroJogador < numeroComputador) {
//             printf("O número do jogador é menor, VOCÊ GANHOU!!\n");
//         } else {
//             printf("O número do computador é menor, VOCÊ PERDEU!\n");
//         }
//         break;    
//     case 'I':
//     case 'i':
//         if(numeroJogador == numeroComputador) {
//             printf("Os número são iguais, VOCÊ GANHOU!\n");
//         } else {
//             printf("Os número são diferentes, VOCÊ PERDEU!\n");
//         }
//         break;
//     default:
//         printf("Opção de jogo inválida!\n");
//         break;
//     }



//switch com operador ternário e respostas com printf
// switch (tipoComparacao)
// {
// case 'M':
// case 'm':
//     resultado = numeroJogador > numeroComputador ? printf("O número do jogador é maior, VOCÊ GANHOU!\n") : printf("O número do computador é maior, VOCÊ PERDEU!\n");
//     break;
// case 'N':
// case 'n':
// resultado = numeroJogador < numeroComputador ? printf("O número do jogador é menor, VOCÊ GANHOU!!\n") : printf("O número do computador é menor, VOCÊ PERDEU!\n");
//     break;    
// case 'I':
// case 'i':
// resultado = numeroJogador == numeroComputador ? printf("Os número são iguais, VOCÊ GANHOU!\n") : printf("Os número são diferentes, VOCÊ PERDEU!\n");
//     break;
// default:
//     printf("Opção de jogo inválida!\n");
//     break;
// }