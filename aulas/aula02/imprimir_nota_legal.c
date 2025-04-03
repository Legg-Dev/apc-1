#include <stdio.h>

int main(){

    printf("-----------------------------------\n");
    printf("            NOTA LEGAL\n");
    printf("-----------------------------------\n");
    printf("Item           Qtd    Prc     Valor\n");
    printf("%-14s %03i %7.2f %10.2f\n","Caneta Azul",2,2.0,4.00);
    printf("%-14s %03i %7.2f %10.2f\n","Borracha",  1,5.00,5.00);
    printf("%-14s %03i %7.2f %10.2f\n","Resma de Papel", 1, 10.0, 10.0);
    printf("-----------------------------------\n");
    printf("                  TOTAL: R$ %9.2f",19.00);

    return 0;
}