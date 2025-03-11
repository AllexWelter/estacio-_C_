
//Exemplo de condições múltiplas

// Loops com condições múltiplas são úteis para situações em que o controle do loop depende de várias variáveis ou condições que precisam ser verificadas simultaneamente.

#include <stdio.h>


int main(){
    //&& ou ||
    // i e ja iniciados ao mesmo tempo 
    // ++ ou --

    for(int i = 0, j = 10; i < 5 && j > 5; i++, j--){
        printf("i- %d, j - %d\n", i, j);
    }




    return 0;
}