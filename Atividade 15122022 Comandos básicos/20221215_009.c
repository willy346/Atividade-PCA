#include <stdio.h>
#include <math.h>

int main(void)  {
    int x, y;
    float z, resultado_1, resultado_2, resultado_3;

    printf("Digite 2 números inteiros e um número real: ");
    scanf("%d %d %f", &x, &y, &z);

    resultado_1 = (2*x)*(y/2);
    resultado_2 = (3*x) + (z);
    resultado_3 = pow(z, 3);

    printf("Resultado 1: %f\n", resultado_1);
    printf("Resultado 2: %f\n", resultado_2);
    printf("Resultado 3: %f", resultado_3);

    return 0;
}