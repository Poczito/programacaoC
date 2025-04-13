#include <stdio.h>

int main(){

    int vetor[5] = {7, 8, 9, 15, 20};

    for(int i = 0; i < 5; i++){
        printf("O valor na posição %d é %d\n", i + 1, vetor[i]);
    }

    char letras[4] = {'C', 'A', 'S', 'A'};

    printf("A palavra é ");

    for(int i = 0; i < 4; i++){
        printf("%c", letras[i]);
    }

    return 0;
}