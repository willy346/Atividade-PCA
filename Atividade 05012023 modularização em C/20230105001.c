#include <stdio.h>

int scanIntIntervalo(int a) {

    while (a < 0 || a > 1000)   {
        printf("Numero Invalido! Digite novamente: ");
        scanf("%d", &a);
    }

    return a;
}

int percentual(float a, float b)   {
    float p;

    if (a > b)    {
        p = 100*(b/a);
        return p;
    }
    else    {
        p = 100*(a/b);
        return p;
    }


}

int absdif(int a, int b)    {

    if (a > b)    {
        return a - b;
    }
    else    {
        return b - a;
    }
}


int main()  {
    int x, y, percent, modulo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    scanIntIntervalo(x);

    printf("Digite um numero inteiro: ");
    scanf("%d", &y);
    scanIntIntervalo(y);

    percent = percentual(x, y);
    modulo = absdif(x, y);

    if (x > y)  {
        printf("%d eh maior que %d\n", x, y);
        printf("A porcentagem de %d sobre %d eh %d porcento\n", y, x, percent);
        printf("O modulo da diferenca entre x e y eh %d", modulo);
    }
    else if (x < y) {
        printf("%d eh maior que %d\n", y, x);
        printf("A porcentagem de %d sobre %d eh %d porcento\n", x, y, percent);
        printf("O modulo da diferenca entre x e y eh %d", modulo);
    }

    return 0;
}
