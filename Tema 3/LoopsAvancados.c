#include <stdio.h>

int main(){
    /*
    //i e j iniciados ao mesmo tempo e condição múltipla com && ou ||
    for (int i = 0, j = 10; i < j || j > 2; i++, j--){
        printf("%d e %d\n", i, j);
    }
    */

    //Operador ternário

    for (int i = 0;
        i < 100;
        i += (i % 2 == 0) ? 3 : 5){

            printf("%d ", i);
        }

    return 0;
}