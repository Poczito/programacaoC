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

    /*
    //long double - números ainda mais precisos
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);
    */
    
    /*
    //Verificando o tamanho das variáveis
    printf("Tamanho de int: %u bytes\n", sizeof(int)); //sizeof retorna o tamanho em bytes da variável
    printf("Tamanho de unsigned int: %u bytes\n", sizeof(unsigned int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de float: %u bytes\n", sizeof(float));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double));
    */

    /*
    //Testes juntando unsigned e long int
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %ld\n", numeroGrande);
    printf("Número: %d\n", numero);
    */

    //Variáveis do tipo short
    short int numeroPequeno = 32767; //Valor máximo de short int;

    printf("Número pequeno (short int): %d\n", numeroPequeno);
    numeroPequeno += 1;
    printf("Número pequeno + 1: %d\n", numeroPequeno);
    printf("Tamanho de short int: %u bytes\n", sizeof(short int));

    return 0;
}