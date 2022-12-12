#include <stdio.h>
#include <string.h>

int main(void)  {
    char nome[30];
    char sexo[10];
    char feminino[10] = "feminino";
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (strcmp(sexo, feminino) == 0) {
        printf("É mulher!");
    }
    else    {
        printf("Não é mulher!");
    }

    return 0;
}