#include <stdio.h>

// int main() {
//     float nota1, nota2, nota3;

//     printf("*** Programa de Cálculo de Média ***\n");
    
//     printf("Digite a primeira nota: ");
//     scanf("%f", &nota1);
//     printf("Nota 1: %.2f\n", nota1);

//     printf("Digite a segunda nota: ");
//     scanf("%f", &nota2);
//     printf("Nota 2: %.2f\n", nota2);

//     printf("Digite a terceira nota: ");
//     scanf("%f", &nota3);
//     printf("Nota 3: %.2f\n", nota3);
    
//     float soma = nota1 + nota2 + nota3;
//     float media = (float) soma / 3;

//     printf("A média das notas %.2f, %.2f e %.2f é: %.2f\n", nota1, nota2, nota3, media);

//     return 0 ;

// }

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
    printf("A média é: %.2f\n", media);

    return 0;
}