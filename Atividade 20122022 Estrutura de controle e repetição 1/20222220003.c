#include <stdio.h>

int main()  {
    int n, i;
    float soma = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);

        if (n % 2 == 1 && (n > 100 && n < 200)) {
            soma += n;
        }
    }
    printf("A soma dos impares é igual a %f", soma);

    return 0;
}
