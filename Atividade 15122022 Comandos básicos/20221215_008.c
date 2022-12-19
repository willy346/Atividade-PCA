#include <stdio.h>

int main(void)  {
    float T;

    printf("Digite a temperatura(°C): ");
    scanf("%f", &T);

    printf("Temperatura em °F: %f", (9*T/5)+32);

    return 0;
}