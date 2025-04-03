#include <stdio.h>

int main() {
    char tecla;

    printf("Pressione uma tecla e depois ENTER:");
    scanf("%c", &tecla); // não sabe tecla = valor então precisa  
                        // acessar o endereço da variavél com o operador &
    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla);

    printf("Pressione outra tecla e depois ENTER:");
    scanf("%c", &tecla);
    getchar();
    printf("Voce pressionou a tecla '%c'\n", tecla);
  
    char nome[31];
    printf("Informe seu nome:");
    scanf("%[^\n]s", nome);
    printf("Ola %s!\n", nome);



    return 0;
}