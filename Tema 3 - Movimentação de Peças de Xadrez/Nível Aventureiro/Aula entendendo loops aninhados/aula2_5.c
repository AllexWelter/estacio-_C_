
//Contagem regressiva de fogos de artifício simulando atraso

#include <stdio.h>

int main(){
    int segundos;

    for(segundos = 10; segundos >= 0; segundos--){
        printf("%d\n", segundos);

        //Loop aninhado para simular uma atraso
        for(int i = 0; i < 100000000; i++){
            //Apenas simular um atraso 
        }
    }

    return 0;
}