#include <stdio.h>

int main(void)  {
    int n, soma_pares = 0, soma_impares = 0;
    int parada = 1;

    while (parada == 1)   {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);

        if (n > 1000)   {
            parada = 0;
        }

        if (n % 2 == 0) {
            soma_pares += n;
        }
        else if (n % 2 == 1)    {
            soma_impares += n;
        }

        }
        printf("A soma dos numeros pares eh igual a %d, e a soma dos numeros impares eh igual a %d", soma_pares, soma_impares);

        return 0;
    }
