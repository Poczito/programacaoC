#include <stdio.h>

int main(){

    /*
    Operador "e" (&&)
    Operador "ou" (||)
    Operador not (!)
    */

    /*
    int a = 10, b = 5;

    printf("\nSendo a = %d e b = %d\n", a, b);
    printf("Conside 1 = verdadeiro e 0 = falso\n\n");
    printf("a > 0 e b > 0: %d\n", a > 0 && b > 0);
    printf("a > 0 ou b > 0: %d\n", a > 0 || b > 0);
    printf("not (a > 0 e b > 0): %d\n", ! (a > 0 && b > 0));
    printf("a < 0 e b > 0: %d\n", a < 0 && b > 0);
    printf("a < 0 ou b > 0: %d\n", a < 0 || b > 0);
    printf("not (a < 0 e b > 0): %d\n", ! (a < 0 && b > 0));
    */

    /*
    
    int a, b;

    printf("Insira o primeiro valor: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("\na > 0 e b > 0?\n");
    if (a > 0 && b > 0){
        printf("Ambos são positivos\n");
    } else {
        printf("Pelo menos um dos números não é positivo\n");
    }

    printf("\na > 0 ou b > 0?\n");
    if (a > 0 || b > 0){
        printf("Pelo menos um dos números é positivo\n");
    } else {
        printf("Ambos são negativos\n");
    }

    */

    /*
    int a = 5, b = 10, c = 0;
    
    printf("Sendo a = %d, b = %d e c = %d\n", a, b, c);
    printf("Temos que a > 0 && b < 0 || c == 0 ");
    if (a > 0 && b < 0 || c == 0)
    {
        printf("é uma expressão verdadeira\n");
    } else {
        printf("é uma expressão falsa\n");
    }

    */

    int idade = 25;
    float altura = 1.70;

    if(idade >= 18 && idade <= 30 && altura > 1.701){
        printf("Você está na faixa etária e tem altura adequada");
    } else {
        printf("Você não atende aos critérios");
    }
    

    return 0;
}