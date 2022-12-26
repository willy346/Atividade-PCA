#include <stdio.h>

int main(void)  {
    int n, i;
    int mult = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {

        if (n % i == 0) {
            mult++;
        }
    }

    if (mult == 0)  {
        printf("Eh primo");
    }
    else    {
        printf("Nao eh primo");
    }

    return 0;
}
