#include <stdio.h>

int main(){

    /* int i = 0;

    while (i <= 10){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }

    i = 0;

    */

    /*
    int opcao;

    do{

        printf("Digite um número par para sair: ");
        scanf("%d", &opcao);

        if(opcao % 2 ==0){
            printf("%d é par\n", opcao);
        } else {
            printf("%d é ímpar\n", opcao);
        }

    }while (opcao % 2 != 0);

    printf("Você digitou um número par!\nSaindo do programa...\n");

    */

    int numero, i;

    printf("Digite o número para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    
    }

    return 0;
}