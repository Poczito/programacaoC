#include <stdio.h>

int main(){

    /*
    %d - Imprime um inteiro no formato decimal
    %i - Equivalente ao %d
    %f - Imprime um número de ponto flutuante no formato padrão
    %e - Imprime um número de ponto flutuante em notação científica
    %c - Imprime um único caractere
    %s - Imprime uma string de caracteres
    */

   //Declarando e iniciando as variáveis
   int idade = 32;
   float altura = 1.82;
   char opcao = 'S';
   char nome[20] = "Celso";

   //Imprimindo as variáveis
   printf("---------------\n");
   printf("Nome: %s\n", nome);
   printf("Idade: %d anos\n", idade);
   printf("Altura: %.2fm\n", altura);
   printf("Opção: %c\n", opcao);
   printf("---------------\n");

    return 0;
}

