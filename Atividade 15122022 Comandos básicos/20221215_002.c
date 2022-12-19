#include <stdio.h>

int main(void)  {
    float a, b, c, d;
    printf("Digite suas 4 notas do bimestre: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("Média: %f", (a+b+c+d)/4);

    return 0;
}