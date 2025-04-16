#include <stdio.h>

int main(){

    int matriz[3][3];
    int valor = 1, target;
    int found = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = valor++;
        }
    }

    printf("Qual número deseja buscar?\n");
    scanf("%d", &target);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == target){
                printf("O elemento %d foi encontrado na posição (%d,%d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        printf("Elemento %d não encontrado na matriz!\n", target);
    }
    
    return 0;
}