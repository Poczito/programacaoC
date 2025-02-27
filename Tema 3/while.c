#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    /*

    int i = 1;

    while(i <= 5){
        printf("%d\n", i);
        i++;
    }
    */

    int i, c = 0;
    srand(time(0));
    i = (rand() % 10) + 1;

    while(c <= 5){
        printf("%d e %d\n", c, i);
        c++;
        i = (rand() % 10) + 1;
    }
    return 0;
}