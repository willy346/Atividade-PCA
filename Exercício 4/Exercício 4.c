#include <stdio.h>

int main(void)  {
    float valor_conta, porc_garcom;

    printf("Digite o valor da conta: ");
    scanf("%f", &valor_conta);
    printf("Digite a porcentagem do garçom: ");
    scanf("%f", &porc_garcom);

    printf("O valor da porcentagem do garçom é de: R$ %0.2f", valor_conta*(porc_garcom/100));

    return 0;
}