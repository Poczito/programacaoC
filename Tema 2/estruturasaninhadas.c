#include <stdio.h>

int main(){

    // estruturas aninhadas > if - if - if
    // verifica de maneira hierárquica uma série de condições

    /*

    // Verificar se todas as condições para recebimendo de auxílio são atendidas

    unsigned int idade, dependentes;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%u", &idade);
    printf("Digite a sua renda: R$");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%u", &dependentes);

    if (idade >= 18 && idade <= 60){
        if(renda < 3000){
            if(dependentes >= 3){
                printf("Você tem direito ao benefício!");
            } else {
                printf("Poucos dependentes!");
            }
        } else {
            printf("Renda não aprovada!\n");
        }
    } else {
        printf("\nIdade não aceita!\n");
    }

    */

    // Dizer se um número é positivo, negativo ou zero e, caso positivo, se é par ou ímpar

    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("O número é 0!\n");
    } else if(numero < 0){
        printf("O número é negativo!\n");
    } else {
        printf("O número é positivo e ");
        if(numero % 2 == 0){
            printf("é par!");
        } else {
            printf("é ímpar!");
        }
    }

}