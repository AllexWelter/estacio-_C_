#include <stdio.h>

//SISTEMA DE GERENCIAMENTO DE INVENTÁRIO
int main(){

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    int resultadoA, resultadoB;

    //Exibir infos dos produtos
    printf("%s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("%s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    //Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O %s tem estoque mínimo? 1 para sim: %d\n", produtoA, resultadoA);
    printf("O %s tem estoque mínimo? 1 para sim: %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A(R$ %.2f) é maior que o valor total de B(R$ %.2f)? 1 para sim e 0 para não: %d\n",estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));



    return 0;
}