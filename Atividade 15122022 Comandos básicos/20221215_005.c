#include <stdio.h>

int main(void)  {
    float l;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &l);

    printf("O valor da area do quadrado é: %f\n", pow(l, 2));
    printf("O dobro da área do quadrado é: %f", 2*pow(l, 2));

    return 0;
}