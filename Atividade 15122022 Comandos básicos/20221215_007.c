#include <stdio.h>

int main(void)  {
    float T;

    printf("Digite a temperatura(°F): ");
    scanf("%f", &T);

    printf("Temperatura em °C: %f", (5 * (T-32) / 9));

    return 0;
}