#include <stdio.h>

int main(){

    char nome[20];
    int idade, matricula;
    float altura;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite a sua altura: ");
    scanf("%f", &altura);
    printf("\nDigite a sua matrícula: ");
    scanf("%d", &matricula);

    printf("\n---------------\n");
    printf("Matrícula %d\n", matricula);
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2fm", altura);
    printf("\n---------------\n");

    return 0;
}