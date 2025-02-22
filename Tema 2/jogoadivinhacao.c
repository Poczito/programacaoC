#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, numeroSecreto, palpite;
    
    printf("--- Menu Principal ---\n\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);



    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("\nDigite um número de 0 a 9: ");
            scanf("%d", &palpite);
            printf("A máquina escolheu %d\n", numeroSecreto);
            if (palpite == numeroSecreto){
                printf("Parabéns! Você ganhou!\n");
            } else {
                printf("Que pena! Você perdeu!\n");
            }
        break;

        case 2:
            printf("   Escolha um número de 0 a 9. A máquina também escolherá\n");
            printf("um número aleatório. Caso vocês tenham escolhido o mesmo\nnúmero, você ganha.");
        break;

        case 3:
        break;

        default:
            printf("Opção inválida!");
    }

    return 0;
}