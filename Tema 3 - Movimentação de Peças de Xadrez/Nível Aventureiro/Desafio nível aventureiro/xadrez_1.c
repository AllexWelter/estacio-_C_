#include <stdio.h>


int main(){

    int bispo = 1;
    int rainha = 1;
    int cavalo;
    
    printf("\nBispo:\n");  //Imprime o nome da peça a ser movimentada
    while (bispo <= 5){ // mover diagonalmente o bispo 5 vezes
        printf("Cima, Direita\n"); //Imprime a direção do movimento

        bispo++;
    }

    printf("\nRainha:\n"); //Imprime o nome da peça a ser movimentada
    do
    {
       printf("Esquerda\n");  //Imprime a direção do movimento
       rainha++;

    } while (rainha <= 8); // mover para a esquerda a rainha 8 vezes
    
    printf("\nTorre:\n"); //Imprime o nome da peça a ser movimentada
    for(int torre = 1; torre <= 5; torre++) // mover a torre para a direita 5 vezes
    {
        printf("Direita\n");  //Imprime a direção do movimento
    }

    printf("\nCavalo:\n"); //Imprime o nome da peça a ser movimentada
    for(cavalo = 1; cavalo <= 2; cavalo++){ // mover o cavalo para cima 2 vezes

        printf("Cima\n"); //Imprime a direção do movimento
        
    } while (cavalo >= 2) // mover o cavalo para a direita 1 vez
    {
        printf("Direita\n"); //Imprime a direção do movimento
        break;
    }
    


    return 0;
}


// https://github.com/Cursos-TI/desafio-xadrez-AllexWelter