// Integração de tudo que foi aprendido até agora

#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("----- Menu Principal -----\n\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Insira a primeira nota: ");
            scanf("%f", &nota1);
            printf("Insira a segunda nota: ");
            scanf("%f", &nota2);
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
                media = (nota1 + nota2) / 2;
                printf("A média do aluno é %.2f", media);
            } else {
                printf("Uma ou mais notas inválidas");
            }
            break;
        case 2:
            printf("Insira a média do aluno: ");
            scanf("%f", &media);
            if(media < 0 || media > 10){
                printf("Média inválida");
            } else {
                media >= 6.0 ? printf("O aluno foi aprovado!") : printf("O aluno foi reprovado!");
            }
            break;
        case 3:
            printf("Aperte qualquer tecla para sair.");
            break;
        default:
            printf("Opção inválida");
    }
    return 0;
}