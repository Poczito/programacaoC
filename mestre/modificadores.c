//Função: explicar, testar e exemplificar os modificadores de tipo de variável
#include <stdio.h>

int main(){

    /*
    //signed x unsigned

    int numeroSinal = 3000000000; // Este valor excede o limite de um int signed (normal)
    unsigned int numeroSemSinal = 3000000000; // Modificador exclui a possibilidade de valores negativos, assim o limite de números é maior

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);   
    */

    /*
    //long int - aumenta o número de bytes da variável, permitindo valores maiores

    int numeroNormal = 2147483647; // valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);
    printf("Número grande + 1: %ld\n", numeroGrande + 1);
    */

    //Verificando o tamanho das variáveis
    printf("Tamanho de int: %u bytes\n", sizeof(int)); //sizeof retorna o tamanho em bytes da variável
    printf("Tamanho de unsigned int: %u bytes\n", sizeof(unsigned int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de float: %u bytes\n", sizeof(float));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double));

    return 0;
}