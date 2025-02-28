#include <stdio.h>

int main(){

    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);
    // A >= 90
    // B >= 80
    // C >= 70
    // D => 60
    // E => 50
    // F => 40 -

    // if(nota >= 90) {
    //     printf("Conceito A!\n");
    // } else if (nota < 90 && nota >= 80) {
    //     printf("Conceito B!\n");
    // } else if (nota < 80 && nota >= 70) {
    //     printf("Conceito C!\n");
    // } else if (nota < 70 && nota >= 60) {
    //     printf("Conceito D!\n");
    // } else if (nota < 60 && nota >= 50) {
    //     printf("Conceito E!\n");
    // }else {
    //     printf("Conceito F\n");
    // }

    if(nota <= 49) {
        printf("Conceito F!\n");
    } else if (nota >= 50 && nota < 60) {
        printf("Conceito E!\n");
    } else if (nota >= 60 && nota < 70) {
        printf("Conceito D!\n");
    } else if (nota >= 70 && nota < 80) {
        printf("Conceito C!\n");
    } else if (nota >= 80 && nota < 90) {
        printf("Conceito B!\n");
    } else {
        printf("Conceito A!\n");
    }


    return 0;
}