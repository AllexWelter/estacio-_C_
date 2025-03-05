#include <stdio.h>
#include <stdlib.h>

int main() {
    char pais[30], pais1[30];
    char estado, estado1;
    char codigo[10], codigo1[10];
    char cidade[50], cidade1[50];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int pontosTuristicos, pontosTuristicos1;
    int cartaCompare, vitorias1 = 0, vitorias2 = 0;

    printf("### BEM VINDO AO SUPER TRUNFO! ###\n");
    printf("1. Adicionar Cartas\n");
    printf("2. Mostrar Cartas\n");
    printf("3. Regras\n");
    printf("5. Sair\n");
    scanf("%d", &cartaCompare);

    switch (cartaCompare) {
        case 1:
            printf("***Digite os dados da primeira carta***\n");
            printf("Digite o País: ");
            scanf("%s", pais);
            printf("Digite uma letra para o Estado: ");
            scanf(" %c", &estado);
            printf("Digite o código da carta: ");
            scanf("%s", codigo);
            printf("Digite o nome da Cidade: ");
            scanf("%s", cidade);
            printf("Digite a população da cidade: ");
            scanf("%d", &populacao);
            printf("Digite a área da cidade: ");
            scanf("%f", &area);
            printf("Digite o PIB da cidade: ");
            scanf("%f", &pib);
            printf("Digite a quantidade de pontos turísticos da cidade: ");
            scanf("%d", &pontosTuristicos);

            printf("***Digite os dados da segunda carta***\n");
            printf("Digite o País: ");
            scanf("%s", pais1);
            printf("Digite uma letra para o Estado: ");
            scanf(" %c", &estado1);
            printf("Digite o código da carta: ");
            scanf("%s", codigo1);
            printf("Digite o nome da Cidade: ");
            scanf("%s", cidade1);
            printf("Digite a população da cidade: ");
            scanf("%d", &populacao1);
            printf("Digite a área da cidade: ");
            scanf("%f", &area1);
            printf("Digite o PIB da cidade: ");
            scanf("%f", &pib1);
            printf("Digite a quantidade de pontos turísticos da cidade: ");
            scanf("%d", &pontosTuristicos1);
            break;

        case 2:
            printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", 
                estado, codigo, cidade, populacao, area, pib, pontosTuristicos);
            printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", 
                estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
            break;
    }

    // Primeira comparação
    printf("\nSelecione o primeiro atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    scanf("%d", &cartaCompare);

    if (cartaCompare == 1) {
        printf("População: %s (%d) x %s (%d)\n", cidade, populacao, cidade1, populacao1);
        if (populacao > populacao1) {
            vitorias1++;
        } else if (populacao1 > populacao) {
            vitorias2++;
        }
    } else if (cartaCompare == 2) {
        printf("Área: %s (%.2f km²) x %s (%.2f km²)\n", cidade, area, cidade1, area1);
        if (area > area1) {
            vitorias1++;
        } else if (area1 > area) {
            vitorias2++;
        }
    } else if (cartaCompare == 3) {
        printf("PIB: %s (%.2f bilhões) x %s (%.2f bilhões)\n", cidade, pib, cidade1, pib1);
        if (pib > pib1) {
            vitorias1++;
        } else if (pib1 > pib) {
            vitorias2++;
        }
    } else if (cartaCompare == 4) {
        printf("Pontos Turísticos: %s (%d) x %s (%d)\n", cidade, pontosTuristicos, cidade1, pontosTuristicos1);
        if (pontosTuristicos > pontosTuristicos1) {
            vitorias1++;
        } else if (pontosTuristicos1 > pontosTuristicos) {
            vitorias2++;
        }
    } else {
        printf("Opção inválida!\n");
    }

    // Segunda comparação
    printf("\nSelecione o segundo atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    scanf("%d", &cartaCompare);

    if (cartaCompare == 1) {
        printf("População: %s (%d) x %s (%d)\n", cidade, populacao, cidade1, populacao1);
        if (populacao > populacao1) {
            vitorias1++;
        } else if (populacao1 > populacao) {
            vitorias2++;
        }
    } else if (cartaCompare == 2) {
        printf("Área: %s (%.2f km²) x %s (%.2f km²)\n", cidade, area, cidade1, area1);
        if (area > area1) {
            vitorias1++;
        } else if (area1 > area) {
            vitorias2++;
        }
    } else if (cartaCompare == 3) {
        printf("PIB: %s (%.2f bilhões) x %s (%.2f bilhões)\n", cidade, pib, cidade1, pib1);
        if (pib > pib1) {
            vitorias1++;
        } else if (pib1 > pib) {
            vitorias2++;
        }
    } else if (cartaCompare == 4) {
        printf("Pontos Turísticos: %s (%d) x %s (%d)\n", cidade, pontosTuristicos, cidade1, pontosTuristicos1);
        if (pontosTuristicos > pontosTuristicos1) {
            vitorias1++;
        } else if (pontosTuristicos1 > pontosTuristicos) {
            vitorias2++;
        }
    } else {
        printf("Opção inválida!\n");
    }

    // Exibir resultado final
    printf("\nResultado Final:\n");
    if (vitorias1 > vitorias2) {
        printf("Carta 1 venceu!\n");
    } else if (vitorias2 > vitorias1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}