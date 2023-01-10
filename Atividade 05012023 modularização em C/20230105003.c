#include <stdio.h>

int paridade(int n) {

    while (n % 2 == 1)  {
        printf("Numero invalido, digite um numero par: ");
        scanf("%d", &n);
    }

    return n;
}

void perfeito(int n) {
    int i;
    int soma = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    if (soma == n)  {
        printf("%d eh perfeito",n);
    }
    else    {
        printf("%d nao eh perfeiro", n);
    }
}

int main()  {
    int x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    paridade(x);
    perfeito(x);

    return 0;
}
