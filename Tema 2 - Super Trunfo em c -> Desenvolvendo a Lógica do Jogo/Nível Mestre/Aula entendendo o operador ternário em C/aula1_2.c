#include <stdio.h>

int main(){
    int num1 = 27, num2 = 25;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O número maior é: %d\n", maior);

    // if(num1 > num2){
    //     printf("O número maior é: %d\n", num1);    
    // } else {
    //     printf("O número maior é: %d\n", num2);
    // }


    return 0;
}



// resultado = num1 > num2 ? 1 : 0;

// if(resultado == 1){
//     printf("O primeiro número é maior!\n");
// } else {
//     printf("O segundo número é maior\n");
// }