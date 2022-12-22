#include <stdio.h>
#include <string.h>

int main(void)  {
    float media, nota, maiorMedia, menorMEdia, maiorNota1, maiorNota2, maiorNota3, menorNota1, menorNota2, menorNota3;
    float nota1, nota2, nota3;
    char resposta[3];
    int continuar = 1;
    int iniciarLeitura = 1;
    int comparar;


    while (continuar == 1)    {
        printf("Deseja inserir sua nota? ");
        scanf(" %3[^\n]", resposta);
        scanf("%*c");

        comparar = strcmp(resposta, "sim");

        if (comparar == 0)  {

            printf("Digite tres notas: ");
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            media = (nota1 + nota2 + nota3)/3;

            if (iniciarLeitura == 1)    {
                maiorMedia = media;
                menorMEdia = media;
                menorNota1 = nota1;
                maiorNota1 = nota1;
                maiorNota2 = nota2;
                menorNota2 = nota2;
                maiorNota3 = nota3;
                menorNota3 = nota3;
            }
            iniciarLeitura = 0;

            if (media > maiorMedia) {
                maiorMedia = media;
            }

            if (media < menorMEdia) {
                menorMEdia = media;
            }
            
            if (nota1 > maiorNota1) {
                maiorNota1 = nota1;
            }
            if (nota1 < menorNota1)    {
                menorNota1 = nota1;
            }
            if (nota2 > maiorNota2)    {
                maiorNota2 = nota2;
            }
            if (nota2 < menorNota2)    {
                menorNota2 = nota2;
            }
            if (nota3 > maiorNota3)    {
                maiorNota3 = nota3;
            }
            if (nota3 < menorNota3)    {
                menorNota3 = nota3;
            }

        }

        if (comparar != 0) {
            continuar = 0;
        }

    }

    printf("As maiores notas dos testes 1, 2 e 3 foram %f, %f e %f\n", maiorNota1, maiorNota2, maiorNota3);
    printf("As menores notas dos testes 1, 2 e 3 foram %f, %f e %f\n", menorNota1, menorNota2, menorNota3);
    printf("A maior e a menor media foram %f e %f", maiorMedia, menorMEdia);

    return 0;
}