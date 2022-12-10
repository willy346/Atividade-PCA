#include <stdio.h>

int main(void)  {
    float salario;
    float reajuste;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    reajuste = (0.10*salario) + salario;
    printf("Salario com reajuste: %.2f", reajuste);

    return 0;
}