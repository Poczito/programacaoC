#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("----- Jokenpô -----\n\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha sua opção: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador) {
    case 1:
        if(escolhaComputador == 1){
            printf("\nAmbos escolheram pedra. Empate!");
        } else if (escolhaComputador == 2){
            printf("\nO computador escolheu papel. Você perdeu!");
        } else if (escolhaComputador == 3){
            printf("\nO computador escolheu tesoura. Você ganhou!");
        }
        break;
    case 2:
        if(escolhaComputador == 2){
            printf("\nAmbos escolheram papel. Empate!");
        } else if (escolhaComputador == 3){
            printf("\nO computador escolheu tesoura. Você perdeu!");
        } else if (escolhaComputador == 1){
            printf("\nO computador escolheu pedra. Você ganhou!");
        }
        break;
    case 3:
        if(escolhaComputador == 3){
            printf("\nAmbos escolheram tesoura. Empate!");
        } else if (escolhaComputador == 1){
            printf("\nO computador escolheu pedra. Você perdeu!");
        } else if (escolhaComputador == 2){
            printf("\nO computador escolheu papel. Você ganhou!");
        }
        break;
    default:
            printf("\nOpção inválida!");
        break;
    }

    return 0;
}
