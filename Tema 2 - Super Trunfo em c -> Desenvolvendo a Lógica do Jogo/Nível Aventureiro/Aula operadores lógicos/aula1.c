// E/AND Lógico (&&)
// OU/OR Lógico (||)
// NÃO/NOT Lógico (!)

#include <stdio.h>

int main(){

    int a = -10, b = 5;

    if(a > 0 && b > 0){
        printf("os dois números são positivos\n");
    } else {
        printf("Pelo menos um dos números é negativo\n");
    }

    return 0;
}