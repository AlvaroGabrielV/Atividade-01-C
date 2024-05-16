#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int valor1, valor2, resultado;
	
	printf("Primeiro numero: ");
	scanf("%i",&valor1);
	
	printf("Segundo numero: ");
	scanf("%i",&valor2);
	
	resultado = valor1 / valor2;
	
	printf("\n");
	printf("A divisao dos numeros e: %i",resultado);
	printf("\n");
	
	system("pause");
	
return 0;	
}
