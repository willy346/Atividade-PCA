#include <stdio.h>

int main(void)  {
    float valor_por_hora, horas_trabalhadas, salario;
    
    printf("Digite quanto você ganha por hora: ");
    scanf("%f", &valor_por_hora);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    salario = horas_trabalhadas*valor_por_hora;

    printf("Seu salário bruto: %0.2f\n", salario);
    printf("Valor pago ao INSS: %0.2f\n", salario*0.08);
    printf("Valor pago ao sindicato: %0.2f\n", salario*0.05);
    printf("Seu salário líquido: R$ %0.2f", salario - ((0.11*salario) + (salario*0.08) + (salario*0.05)));

    return 0;

}