#include <stdio.h>


int main(){
    int ind = 1, num, controle = 0, menor;

    while (ind <= 5){
        printf("Digite um número: ");
        scanf("%d", &num);
        controle ++;
        if (controle == 1 && num % 2 == 0)
            menor = num;
        else
            if (num < menor)
                menor = num;
    ind ++;
    }
    
}