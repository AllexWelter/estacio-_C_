// condicao ? verdadeiro : falso; -> operador ternário 

// operação sem o operador ternário
// if(condicao){
//     verdadeiro
// } else {
//     falso
// }


#include <stdio.h>

int main(){
    int idade = 17;
    int resultado;

    resultado = idade >= 18 ? 1 : 0 ;

    if(resultado == 1){
        printf("Você é maior de idade!\n");
    } else {
        printf("Você é menor de idade!\n");
    }

    return 0;
}



