#include <stdio.h>

int main(){

    /* Operadores Matemáticos
        Soma +
        Subtração -
        Multiplicação *
        Divisão /
     */

    //Declarando as variáveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    //Entrada dos números pelos usuários
    printf("Insira dois números inteiros:");
    scanf("%d %d", &numero1, &numero2);

    //Cálculo dos resultados
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    // Mostrando os resultados
    printf("\nA soma entre os números é %d\n", soma);
    printf("A subtração entre os números é %d\n", subtracao);
    printf("A multiplicação entre os números é %d\n", multiplicacao);
    printf("A divisão entre os números é %f\n", divisao);

    // Mostrando os resultados de uma segunda maneira
    printf("\n%d + %d = %d\n", numero1, numero2, soma);
    printf("%d - %d = %d\n", numero1, numero2, subtracao);
    printf("%d x %d = %d\n", numero1, numero2, multiplicacao);
    printf("%d : %d = %f\n", numero1, numero2, divisao);

    return 0;
}
