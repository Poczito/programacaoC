#include <stdio.h>

int main(){

    int index;

    char * nomesAlunos[3][3] = {
        {"Ana", "Port = 30", "Mat = 90"},
        {"Bia", "Port = 60", "Mat = 60"},
        {"Marcela", "Port = 90", "Mat = 30"}
    };

    printf("Digite o número do aluno que queira ver as notas\n");
    printf("Para Ana, digite 0\n");
    printf("Para Bia, digite 1\n");
    printf("Para Marcela, digite 2\n");
    scanf("%d", &index);

    printf("\nAs notas de %s são %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}