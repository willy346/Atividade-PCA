#include <stdio.h>

int main()  {
    float n, i;
    float soma = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%f", &n);
        soma += n;
    }
    printf("A soma dos números é igual a %f", soma);

    return 0;
}
