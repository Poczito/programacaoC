#include <stdio.h>

int main(){

    // estruturas encadeadas > if - else if - else if... - else
    // se a primeira condição não é verdadeira, testa-se a segunda e assim vai

    unsigned int idade;

    printf("Digite sua idade: ");
    scanf("%u", &idade);

    if (idade < 12){
        printf("\nCriança\n");
    } else if(idade < 18) {
        printf("\nAdolescente\n");
    } else if(idade < 60){
        printf("\nAdulto\n");
    } else {
        printf("\nIdoso\n");
    }

    return 0;
}