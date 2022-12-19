#include <stdio.h>

int main(void)  {
    float x;

    printf("Digite o valor(em metros): ");
    scanf("%f", &x);

    printf("Resultado: %f cm", x*100);

    return 0;
}