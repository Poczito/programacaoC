#include <stdio.h>

int main(){

    /* Operadores de Atribuição
    Atribuição simples =
    Atribuição com som +=
    Atribuição com subtração -=
    Atribuição com multiplicação *=
    Atribuição com divisão /=
    */

    int resultado;
    printf("Insira um número inteiro: ");
    scanf("%d", &resultado);

    printf("\nO valor inicial é %d\n", resultado);

    // resultado = resultado + 20
    resultado += 20;
    printf("Somado com 20 é %d\n", resultado);

    // resultado = resultado - 5
    resultado -= 5;
    printf("Subtraindo 5 temos %d\n", resultado);

    // resultado = resultado * 4
    resultado *= 4;
    printf("Vezes 4 é %d\n", resultado);

    // resultado = resultado / 2
    resultado /= 2;
    printf("Pela metade é %d", resultado);

    return 0;
}