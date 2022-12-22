#include <stdio.h>
#include <stdlib.h>

int main(void)  {
    int n, i, maior, menor;
    int inicioLeitura = 1;

     for (i = 0; i < 20; i++)    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if (inicioLeitura == 1)  {
            maior = n;
            menor = n;
        }
        inicioLeitura = 0;

        if (n > maior)  {
            maior = n;
        }
        else if (n < menor)  {
            menor = n;
        }
     }
    printf("O maior numero eh %d e o menor eh %d", maior, menor);

    return 0;
}