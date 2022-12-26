#include <stdio.h>

int main()  {
    float m;
    int seg = 0, min, horas;

    printf("Digite a massa do material(em gramas): ");
    scanf("%f", &m);

    while (m >= 0.5)    {
        m -= (0.5*m);
        seg += 50;
    }
    min = seg/60;
    horas = seg/3600;

    printf("O tempo calculado eh de %d:%d:%d", horas, min, seg%60);

    return 0;
}
