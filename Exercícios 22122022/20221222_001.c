#include <stdio.h>
#include <math.h>

int main(void)  {
    float y, x1, xi, xii;
    float e = 0.1;

    printf("Digite um numero: ");
    scanf("%f", &y);

    x1 = y/2;
    xi = x1;
    xii = xi - ((pow(xi, 2) - y)/(2*xi));

    while (fabs(xii - xi) >= e) {
        xi = xii;
        xii = xi - ((pow(xi, 2) - y)/(2*xi));
    }

    printf("A raiz do numero eh igual a %f\n", xii);
    printf("A raiz do numero com a funcao sqrt() eh igual a %f", sqrt(y));

    return 0;

}
