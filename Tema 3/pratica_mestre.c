#include <stdio.h>

void recursivo(int numero){
    if(numero >= 0){
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
}

int main(){

    int quantidade = 10;
    recursivo(quantidade);

    return 0;
}