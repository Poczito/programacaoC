#include <stdio.h>

void recursivo(int numero){

    if(numero >= 0){
        printf("%d\n", numero);
        recursivo(numero - 1);
    }

}

int main(){

    printf("Contagem regressiva:\n");
    recursivo(10);
    return 0;
}