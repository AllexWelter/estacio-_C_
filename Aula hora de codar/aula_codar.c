#include <stdio.h>


int main() {

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("O aluno %s tem %d anos de idade e %.2f de altura, possuindo a matrícula de número %d.\n", nome, idade, altura, matricula);

    return 0;
}