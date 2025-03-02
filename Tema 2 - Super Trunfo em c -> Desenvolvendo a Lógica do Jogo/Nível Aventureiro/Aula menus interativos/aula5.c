#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:  
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;
        printf("Digite um número de 0 a 10: ");
        scanf("%d", &palpite);
        if(numeroSecreto == palpite)
        {
            printf("Você acertou!\n");
            printf("Número secreto %d\n", numeroSecreto);
        } else {
            printf("Você errou!\n");
            printf("Número secreto %d\n", numeroSecreto);
        }
        
        break;
    case 2:
        printf("A explicação das regras do jogo!\n");
        printf("Digite a opção relacionada as regras do jogo: \n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1\n");
            break;
        case 2:
            printf("Regra 2\n");
            break;
        case 3:
            printf("Regra 3\n");
            break;
        }
        break;
    case 3:
        printf("Saindo do jogo... \n");
        break;
    default:
        printf("Opção inválida, tente novamente!\n");
        break;
    }


    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//   int opcao;
//   int numeroSecreto, palpite;

//   printf("Menu Principal\n");
//   printf("1. Iniciar Jogo\n");
//   printf("2. Ver Regras\n");
//   printf("3. Sair\n");
//   printf("Escolha uma opção: \n");
//   scanf("%d", &opcao);

//   switch (opcao) {
//     case 1:
//       srand(time(0));
//       numeroSecreto = rand() % 10 + 1;
//       printf("Adivinhe o número (entre 1 e 10): \n");
//       scanf("%d", &palpite);

//       if (palpite == numeroSecreto) {
//         printf("Parabéns! Você acertou!\n");
//       } else {
//         printf("Você errou. O número era %d.\n", numeroSecreto);
//       }
//       break;
//     case 2:
//       printf("Regras do Jogo:\n");
//       printf("1. Escolha uma opção no menu.\n");
//       printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
//       printf("3. O jogo termina quando você escolhe 'Sair'.\n");
//       break;
//     case 3:
//       printf("Saindo...\n");
//       break;
//     default:
//       printf("Opção inválida. Tente novamente.\n");
//   }

//   return 0;
// }