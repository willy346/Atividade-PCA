#include <stdio.h>

int main()  {
    int n, i;
    float soma = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &n);

        if (n % 2 == 1) {
            soma += n;
        }
    }
    printf("A soma dos impares � igual a %f", soma);

    return 0;
}
