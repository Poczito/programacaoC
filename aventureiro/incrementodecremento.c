#include <stdio.h>

int main(){

    //Apagar o /* e */ de acordo com a parte que quer testar

    /* Operadores de incremento e decremento
    Incremento ++ 
    Pré-incremento ++a
    Pós-incremento a++
    Decremento --
    Pré-decremento --a
    Pós-decremento a--
    */

    /*
    //Testando o incremento e o decremento simples
    int numero1;
    printf("Insira um número inteiro: ");
    scanf("%d", &numero1);

    printf("Antes do incremento: %d\n", numero1);

    //numero1 = numero1 + 1 OU numero1 += 1
    numero1++;
    printf("Após incremento: %d\n", numero1);

    //numero1 = numero1 - 1 OU numero1 -= 1
    numero1--;
    printf("Após decremento: %d\n", numero1);
    */

    /*
    //Testando o pré e pós incremento
    int numero, resultado;
    numero = 1;
    resultado = numero++;
    printf("O número %d e o resultado pós-incremento %d\n\n", numero, resultado);

    numero = 1;
    resultado = ++numero;
    printf("O número %d e o resultado pré-incremento %d", numero, resultado);
    */

    /*
    //Testando o pré e pós decremento
    int numero, resultado;
    numero = 1;
    resultado = numero--;
    printf("O número %d e o resultado pós-decremento %d\n\n", numero, resultado);

    numero = 1;
    resultado = --numero;
    printf("O número %d e o resultado pré-decremento %d", numero, resultado);
    */

    int numero = 5;
    printf("%d e %d", numero++, numero);

    return 0;
}