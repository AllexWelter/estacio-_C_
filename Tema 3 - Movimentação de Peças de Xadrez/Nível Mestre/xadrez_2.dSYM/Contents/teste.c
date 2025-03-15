#include <stdio.h>


int main(){
    int controle = 1, num, menor, cont;

    for(cont = 1; cont <= 20; cont++){
        printf("Digite um número:", cont);
        scanf("%d", &num);
        

        if (controle == 1)
        menor = num;
        else if (num < menor)
        menor = num;
        controle ++;
        

    }
        printf("O menor número é: %d\n", menor);

    return 0;
}





// int controle = 1, num, menor, cont;

//     for(cont = 1; cont <= 20; cont++){
//         scanf("%d", &num);
        

//         if (controle == 1)
//         menor = num;
//         else if (num < menor)
//         menor = num;
//         controle++;

       
//     }