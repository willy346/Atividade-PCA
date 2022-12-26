#include <stdio.h>

int main(void)  {
    float soma = 0;
    float m = 2;
    float n = 1;

    for (m = 1; m < 51; m++)    {
        soma += (n/m);
        n += 2;
    }

    printf("Soma = %f", soma);
}
