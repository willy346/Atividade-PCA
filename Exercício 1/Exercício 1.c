#include <stdio.h>

int main(void)	{
	float A, b, h;

	printf("Insira a base e altura do tri�ngulo: ");
	scanf("%f %ff", &b, &h);
	A = b*h/2;

	printf("�rea do tri�ngulo: %f", A);

	return 0;
}
