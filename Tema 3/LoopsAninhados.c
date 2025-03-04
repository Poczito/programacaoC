#include <stdio.h>

int main(){

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

    return 0;
}