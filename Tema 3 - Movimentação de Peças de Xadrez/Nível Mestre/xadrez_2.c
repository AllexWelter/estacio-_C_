#include <stdio.h>


void moverRainha(int casas) { // declaração da variável com recursividade 
    if(casas > 0){ //Lógica para calcular movimentos, controlada por caso-base(condição base)
        printf("Esquerda\n");
        moverRainha(casas - 1); // chama a si mesma com casas - 1
    }
}

void moverTorre(int casas) { // declaração da variável com recursividade 
    if(casas > 0){ //Lógica para calcular movimentos, controlada por caso-base(condição base)
        printf("Direita\n");
        moverTorre(casas -1); // chama a si mesma com casas - 1
    }
}

void moverBispo(int casas){ // declaração da variável com recursividade 
    if(casas > 0){ //Lógica para calcular movimentos, controlada por caso-base(condição base)
        printf("Cima, Direita\n");
        moverBispo(casas -1); // chama a si mesma com casas - 1        
    }
}

void moverCavalo(int cavalo){
    for(cavalo = 1; cavalo <= 2; cavalo++){ // mover o cavalo para cima 2 vezes

        printf("Cima\n"); //Imprime a direção do movimento
        
    } while (cavalo >= 2) // mover o cavalo para a direita 1 vez
    {
        printf("Direita\n"); //Imprime a direção do movimento
        break;
    }    
}

int main(){
   
    int cavalo;
    
    printf("\nBispo:\n");
    moverBispo(5); // chamada recursiva

    printf("\nRainha:\n");
    moverRainha(8); // chamada recursiva

    printf("\nTorre:\n");
    moverTorre(5); // chamada recursiva

    printf("\nCavalo:\n");
    moverCavalo(1); // chamada recursiva
    
    return 0;
}


// https://github.com/Cursos-TI/desafio-xadrez-AllexWelter