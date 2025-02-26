#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("--- Jogo Maior, Menor ou Igual ---\n\n");
    printf("Escolha o tipo de comparação:\n");
    printf("M = maior:\n");
    printf("N = menor:\n");
    printf("I = igual:\n");
    scanf("%c", &tipoComparacao);

    printf("\nDigite seu número entre 1 e 100: ");
    scanf("%d", &numeroJogador);
    if(numeroJogador > 100 || numeroJogador < 1){
        printf("Número inválido!");
    } else {
        printf("\nO número do computador é %d\n", numeroComputador);

        switch (tipoComparacao){
            case 'M':
            case 'm':
                printf("Você escolheu a opção MAIOR\n");
                numeroJogador > numeroComputador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
                break;
            case 'N':
            case 'n':
                printf("Você escolheu a opção MENOR\n");
                numeroJogador < numeroComputador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
                break;
            case 'I':
            case 'i':
                printf("Você escolheu a opção IGUAL\n");
                numeroJogador == numeroComputador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
                break;
            default:
                printf("Opção de jogo inválida!\n");
        }
    }

    return 0;
}