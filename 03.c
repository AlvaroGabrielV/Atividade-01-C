#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float base, altura, area;
	
	printf("Base do retangulo: ");
	scanf("%f",&base);
	
	printf("Altura do retangulo: ");
	scanf("%f",&altura);
	
	area = base * altura;
	
	printf("\n");
	printf("A area do retangulo e: %.2f\n", area);
	printf("\n");
	
	system("pause");

	
return 0;	
}
