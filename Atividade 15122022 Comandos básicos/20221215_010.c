#include <stdio.h>

int main(void)  {
    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    peso = (72.7*altura) - 58;
    printf("Seu peso ideal: %0.2f kg", peso);

    return 0;
}