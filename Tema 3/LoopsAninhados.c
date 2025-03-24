#include <stdio.h>

int main(){

    // Tabuada

    /*

    int i = 1;

    while (i <= 10){
        int j = 1;
        do {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);
        i++;
        printf("\n");
    }

    */

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}