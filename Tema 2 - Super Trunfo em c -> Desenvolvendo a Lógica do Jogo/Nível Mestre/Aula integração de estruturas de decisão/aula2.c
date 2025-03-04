#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("### MENU DE GERENCIAMENTO DE ESTUDANTES ###\n");
    printf("1. Calcula Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a Média\n");
        printf("Digite a primeira nota\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota\n");
        scanf("%f", &nota2);
        // Testar a condição se a nota é >= 0 e <=10
        if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("A média do aluno é: %.2f\n", media);
        } else {
            printf("Entrada com valores errados de notas!\n");
        }

        break;
    case 2:
        printf("Determinar Status\n");
        printf("Entre com  média: ");
        scanf("%f", & media);
        // media >= 5 ? printf("APROVADO!\n") : printf("REPROVADO!\n"); 
        if(media >= 7) {
            printf("APROVADO!\n");
        } else if(media >= 5) {
            printf("RECUPERAÇÃO!\n");
        } else {
            printf("REPROVADO!\n");
        }
        break;
    case 3:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }


    return 0;
}