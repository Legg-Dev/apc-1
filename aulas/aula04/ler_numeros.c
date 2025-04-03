#include <stdio.h>

int main(){
    int numero;
    printf("Informe um numero inteiro");
    scanf("%i", &numero);
    printf("O numero informado foi %i\n", numero);

    getchar();

    float nota;
    printf("Informa uma nota entre 0.0 a 10.0: ");
    scanf("%f", &nota);
    printf("A sua nota foi %.1f\n", nota);





    return 0;
}