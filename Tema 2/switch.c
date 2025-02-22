#include <stdio.h>

int main(){

    /* //Explicação

    // A função switch executa uma parte específica
    // do código a partir do valor de uma variável como se fosse um menu

    int opcao;
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    // o que será executado se a opção escolhida for 1:
    case 1:
        printf("A opção escolhida foi 1");
    break;

    // o que será executado se a opção escolhida for 2:
    case 2:
        printf("A opção escolhida foi 2");
    break;
    //o que será executado se a opção for qualquer outra:
    default:
        printf("A opção não foi 1 nem 2");
    }
    */

    // Exemplo 1

    int opcao;

    printf("Escolha uma opção:\n\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Seu saldo é R$50,00\n");
        break;
        case 2:
            printf("Qual valor deseja depositar?\n");
        break;
        case 3:
            printf("Qual valor deseja sacar?\n");
        break;
        default:
            printf("Opção inválida!");
    }
    
    return 0;
}