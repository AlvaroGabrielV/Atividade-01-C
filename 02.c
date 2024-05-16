#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota, media;
	int contador;
	float soma = 0;
	
	for (contador = 0; contador < 4; contador++) {
		printf("Nota %d: ", contador + 1);
		scanf("%f",&nota);
		soma = soma + nota;	
	}
	
	media = soma / 4;
	
	printf("\n");
	printf("A media de todas as notas e: %.2f\n", media);
	printf("\n");
	
	system("pause");

	
return 0;	
}
