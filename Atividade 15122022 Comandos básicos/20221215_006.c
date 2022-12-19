#include <stdio.h>

int main(void)  {
    float valor_por_hora, horas_trabalhadas;
    
    printf("Digite quanto você ganha por hora: ");
    scanf("%f", &valor_por_hora);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Seu salário: R$ %0.2f", valor_por_hora*horas_trabalhadas);

    return 0;

}