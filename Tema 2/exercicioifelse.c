#include <stdio.h>

int main(){

    //Declarão das variáveis e entrada de dados

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Insira a temperatura: ");
    scanf("%f", &temperatura);
    printf("Insira a umidade: ");
    scanf("%f", &umidade);
    printf("Insira o estoque: ");
    scanf("%u", &estoque);

    //Verificação

    if (temperatura > 30){
        printf("\nA temperatura está elevada!\n");
    } else {
        printf("\nA temperatura está OK\n");
    }

    if (umidade > 50){
        printf("A umidade está elevada!\n");
    } else {
        printf("A umidade está OK\n");
    }

    if (estoque < estoqueMinimo) {
        printf("O estoque está abaixo do mínimo!\n");
    } else {
        printf("O estoque está OK\n");
    }

    return 0;
}