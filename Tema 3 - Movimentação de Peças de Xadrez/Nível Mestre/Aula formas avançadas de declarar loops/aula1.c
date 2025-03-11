
//Exemplo de múltiplas variáveis

// O método de loops com múltiplas variáveis é útil quando precisamos controlar ou monitorar mais de um valor ao mesmo tempo

#include <stdio.h>


int main(){
    //i e j iniciados ao mesmo tempo
    
    for(int i = 0, j = 10; i < j; i++, j--){ // ++ ou __
        printf("i - %d, j = %d\n", i, j );
    }

    return 0;
}

//controle simultâneo