
// Exemplo de atualizações complexas

#include <stdio.h>

int main(){

    //Operadpr ternário para teste
    for(int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2){
        printf("%d ", i);
    }



    return 0;
}
