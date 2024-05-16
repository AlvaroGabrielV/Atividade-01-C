#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota;
	int contador;
	float soma = 0;
	
	for (contador = 0; contador < 4; contador++) {
		printf("Nota %d: ", contador + 1);
		scanf("%f",&nota);
		soma = soma + nota;	
	}
	
	printf("\n");
	printf("A soma de todas as notas e: %.2f\n", soma);
	printf("\n");
	
	system("pause");

	
return 0;	
}
