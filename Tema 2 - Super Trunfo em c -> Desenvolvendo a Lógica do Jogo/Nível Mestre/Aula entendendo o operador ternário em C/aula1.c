// condicao ? verdadeiro : falso; -> operador ternário 

// operação sem o operador ternário
// if(condicao){
//     verdadeiro
// } else {
//     falso
// }


#include <stdio.h>

int main(){
    int idade = 18;
    int resultado;

    idade >= 18 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");


    return 0;
}