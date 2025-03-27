#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    // unsigned char -> 0 a 255

    // unsigned int -> 0 a 4bi
    // short int -> -32mil a 32mil
    // unsigned short int -> 0 a 65mil
    // long int -> -nonilhao a nonilhao
    // unsigned long int
    
    //long double

    printf("O tipo 'short int' ocupa %i bytes\n", sizeof(short int));
    printf("O tipo 'long int' ocupa %i bytes\n", sizeof(long int));
    printf("O tipo 'long double' ocupa %i bytes\n", sizeof(long double));

    printf( "O tipo 'unsigned char' vai de 0 a %i\n",UCHAR_MAX);
    printf( "O tipo 'unsigned int' vai de 0 a %u\n", UINT_MAX);
    printf( "O tipo 'short int' vai de %ia %i\n", SHRT_MIN, SHRT_MAX);
    printf( "O tipo 'unsigned short int' vai de 0 a %i\n", USHRT_MAX);
    printf( "O tipo 'long int' vai de %ia %i\n", LONG_MIN, LONG_MAX);
    printf( "O tipo 'unsigned long int' vai de 0 a %u\n", ULONG_MAX);
    printf( "O tipo 'long double' vai de %Ea %E\n", LDBL_MIN, LDBL_MAX);

    return 0;
}