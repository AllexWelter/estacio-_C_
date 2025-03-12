#include <stdio.h>

void recursivo(int numero){
    if(numero > 0){
        
        recursivo(numero - 1);
        printf("%d ", numero);
    }
}

int main(){

    int quantidade = 10;

    printf("Contagem regressiva... \n");
    recursivo(quantidade);

    return 0;
}



// O motivo pelo qual o código imprime os números de 1 a 10 e não de 10 a 1 está relacionado à recursão e ao comportamento da pilha de chamadas.

// Entendendo a Execução Passo a Passo
// 	1.	A função recursivo(int numero) recebe um número e verifica se ele é maior que zero.
// 	2.	Se for maior que zero, a função chama a si mesma (recursivo(numero - 1)) antes de imprimir numero.
// 	3.	Essa chamada recursiva continua até numero ser igual a zero, momento em que a recursão para e começa a “desempilhar”.
// 	4.	Somente após as chamadas recursivas começarem a retornar, os números são impressos.

//     A Pilha de Chamadas

// A cada chamada recursiva, a execução da função atual pausa e uma nova função recursivo(numero - 1) é chamada. Isso significa que os números são empilhados antes da execução continuar.

// Vamos ver o que acontece passo a passo quando recursivo(10) é chamado:

// Chamadas Recursivas Empilhadas (devido a recursivo(numero - 1))
// recursivo(10) -> chama recursivo(9)
// recursivo(9) -> chama recursivo(8)
// recursivo(8) -> chama recursivo(7)
// recursivo(7) -> chama recursivo(6)
// recursivo(6) -> chama recursivo(5)
// recursivo(5) -> chama recursivo(4)
// recursivo(4) -> chama recursivo(3)
// recursivo(3) -> chama recursivo(2)
// recursivo(2) -> chama recursivo(1)
// recursivo(1) -> chama recursivo(0) (chega na condição de parada, retorna sem imprimir)

// Agora que recursivo(0) retorna, a pilha começa a desempilhar:

// Chamadas Recursivas Desempilhadas (os prints ocorrem na volta)
// recursivo(1) -> imprime 1
// recursivo(2) -> imprime 2
// recursivo(3) -> imprime 3
// recursivo(4) -> imprime 4
// recursivo(5) -> imprime 5
// recursivo(6) -> imprime 6
// recursivo(7) -> imprime 7
// recursivo(8) -> imprime 8
// recursivo(9) -> imprime 9
// recursivo(10) -> imprime 10

// Por que imprime de 1 a 10?

// Porque o printf("%d ", numero); está localizado após a chamada recursiva. Ou seja, os valores só são impressos depois que a recursão termina e a pilha começa a desempilhar.