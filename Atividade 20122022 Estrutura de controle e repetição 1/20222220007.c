#include <stdio.h>
#include <string.h>

int main(void)  {
    float media, nota, maiorMedia, menorMEdia, maiorNota, menorNota;
    float nota1, nota2, nota3;
    char resposta[3];
    char respostaSim[3] = "sim";
    int continuar = 1;
    int comparar;


    while (continuar == 1)    {
        printf("Deseja inserir sua nota? ");
        scanf("%s", resposta);

        comparar = strcmp(resposta, respostaSim);

        if (comparar == 0)  {

            printf("Digite tres notas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);


        }

        if (comparar != 0) {
            continuar = 0;
        }

    }

    return 0;
}