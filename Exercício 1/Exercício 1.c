#include <stdio.h>

int main(void)	{
	float A, b, h;

	printf("Insira a base e altura do triângulo: ");
	scanf("%f %ff", &b, &h);
	A = b*h/2;

	printf("Área do triângulo: %f", A);

	return 0;
}
