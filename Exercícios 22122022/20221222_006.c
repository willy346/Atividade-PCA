#include <stdio.h>

int main(void)  {
    int n, i, soma_div = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma_div += i;
        }
    }
    if (soma_div == n)  {
        printf("%d eh perfeito", n);
    }
    else    {
        printf("%d nao eh perfeito", n);
    }

    return 0;
}
