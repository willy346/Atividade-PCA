#include <stdio.h>
#include <math.h>

int main(void)  {
    float r;
    float pi = 3.14159265;

    printf("Digite o raio do círculo: ");
    scanf("%f", &r);

    printf("Área do círculo: %f", (pi*pow(r, 2)));

    return 0;
}